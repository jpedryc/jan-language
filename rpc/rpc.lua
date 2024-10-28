local ljson = require("lunajson")

local rpc = {}

---@param rpc_message_content table
---@return string
function rpc.encode_message(rpc_message_content)
	local enc_content = ljson.encode(rpc_message_content)

	return "Content-Length: " .. string.len(enc_content) .. "\r\n\r\n" .. enc_content
end

---@param rpc_message string
---@return table
function rpc.decode_message(rpc_message)
	local enc_content = rpc_message:gmatch("\r\n\r\n(.*)")()

	return ljson.decode(enc_content)
end

return rpc
