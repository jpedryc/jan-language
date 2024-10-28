local lsp_request_handler = {}

---@param lsp_req table
---@return table
function lsp_request_handler.initialize(lsp_req)
	local response = {}

	--response["response"] = { jsonrpc = "2.0", id = lsp_req.id }
	--response["result"] = { capabilities = {}, serverInfo = { name = "jan-lsp", version = "0.0.1" } }
	response["jsonrpc"] = "2.0"
	response["id"] = lsp_req.id
	response["result"] = {
		capabilities = {
			textDocumentSync = 1,
			hoverProvider = true,
			definitionProvider = true,
		},
		serverInfo = { name = "jan-lsp", version = "0.0.1" },
	}

	return response
end

function lsp_request_handler.hover(lsp_req)
	local response = {}

	response["jsonrpc"] = "2.0"
	response["id"] = lsp_req.id
	response["result"] = {
		contents = "Hello from JAN-LSP; line: "
			.. lsp_req.params.position.line
			.. "; pos: "
			.. lsp_req.params.position.character,
	}

	return response
end

function lsp_request_handler.definition(lsp_req)
	local response = {}

	response["jsonrpc"] = "2.0"
	response["id"] = lsp_req.id

	local position = {}
	position["line"] = 1
	position["character"] = 0

	local range = {}
	range["start"] = position
	range["end"] = position

	response["result"] = {
		location = {
			uri = lsp_req.params.textDocument.uri,
			range = range,
		},
	}

	return response
end

return lsp_request_handler
