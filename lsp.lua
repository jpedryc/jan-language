local rpc = require("rpc.rpc")
local log = require("log")
local lsprh = require("lsp_request_handler")

local SIZE = 2 ^ 7 -- good buffer size (8K)

local STATE = {}

-- TODO This should be utils or smth like that
function sleep(a)
	local sec = tonumber(os.clock() + a)
	while os.clock() < sec do
	end
end

---@class Lsp
---@field self.buffer string
---@field self.block string
---@field self.block_size integer
---@field self.log packagelib
local Lsp = {}

local LspMeta = {}
LspMeta.__index = Lsp

---@param block_size_config integer|nil
function Lsp.new(block_size_config)
	local self = setmetatable({}, LspMeta)

	self.block_size = SIZE

	self.log = log
	self.log.outfile = "lsp.log"
	self.log.stdout = nil

	if block_size_config then
		self.block_size = block_size_config
	end

	self.buffer = ""
	self.block = ""

	return self
end

---@param lsp_request table
---@return string|nil
function Lsp:handle_lsp_request(lsp_request)
	self.log.debug("Received method: ", lsp_request.method)
	if lsp_request.method == "initialize" then
		--self.log.debug("Sending method: ", rpc.encode_message(lsprh.initialize(lsp_request)))
		io.write(rpc.encode_message(lsprh.initialize(lsp_request)))
		io.flush()
	elseif lsp_request.method == "initialized" then
		self.log.info("LSP Server initialized")
	elseif lsp_request.method == "textDocument/didOpen" then
		self.log.debug(lsp_request.params.textDocument.uri)
		--self.log.debug(lsp_request.params.textDocument.text)
		STATE[lsp_request.params.textDocument.uri] = lsp_request.params.textDocument.text
	elseif lsp_request.method == "textDocument/didChange" then
		--self.log.debug(lsp_request.params.contentChanges)
		--self.log.debug(rpc.encode_message(lsp_request.params.contentChanges))

		local content_changes = lsp_request.params.contentChanges

		for i = 1, #content_changes do
			STATE[lsp_request.params.textDocument.uri] = content_changes[i].text
		end
	elseif lsp_request.method == "textDocument/hover" then
		--self.log.debug(rpc.encode_message(lsp_request))
		io.write(rpc.encode_message(lsprh.hover(lsp_request)))
		io.flush()
	elseif lsp_request.method == "textDocument/definition" then
		self.log.debug(rpc.encode_message(lsp_request))
		self.log.debug(rpc.encode_message(lsprh.definition(lsp_request)))
		io.write(rpc.encode_message(lsprh.definition(lsp_request)))
		io.flush()
	elseif lsp_request.method == "shutdown" then
		exit(0)
	else
		return nil
	end
end

---@return integer|nil
function Lsp:handle_input_buffer()
	if not self.block then
		return
	end

	self.buffer = self.buffer .. self.block
	self.block = nil

	for content_length in self.buffer:gmatch("Content%-Length: ([0-9]+)\r\n\r\n") do
		local content_start_pos, content_end_pos = string.find(self.buffer, "Content%-Length: ([0-9]+)\r\n\r\n")

		if not content_length or not content_start_pos then
			return
		end

		if self.buffer:sub(content_start_pos, self.buffer:len()):len() >= (content_end_pos + content_length) then
			local found_message = self.buffer:sub(content_start_pos, content_end_pos + content_length)

			--self.log.debug(found_message)

			local lsp_req = rpc.decode_message(found_message)

			self:handle_lsp_request(lsp_req)
			self.buffer = self.buffer:sub(content_end_pos + content_length + 1)
			--self.log.debug("Buffer content after: [" .. self.buffer .. "]")
		end
	end
end

function Lsp:clear_buffer()
	self.buffer = ""
end

function Lsp:run()
	self.log.info("LSP Started")

	while true do
		--self.block = io.read(self.block_size)
		self.block = io.read(1)

		self:handle_input_buffer()

		-- if not ret then
		-- 	self.log.info("Breaking the loop")
		-- 	break
		-- end
	end
end

return Lsp.new()
