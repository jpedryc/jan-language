local Lsp = require("lsp")

function TestHandleInputBuffer()
	Lsp.buffer = ""
	Lsp.block = '{"a":"b"}}Content-Length: 33\r\n\r\n{"method":"abc","params":[1,2,3]}'
		.. 'Content-Length: 36\r\n\r\n{"method":"def123","params":[1,2,3]}'
		.. 'Content-Length: 35\r\n\r\n{"method":"ghi45","params":[1,2,3]}'
		.. 'Content-Length: 33\r\n\r\n{"method":"jkl","params":[1,2,3]}'
		.. "Content-Len"

	Lsp:handle_input_buffer()
	Lsp.block = 'gth: 33\r\n\r\n{"method":"mno","params":[1,2,3]}'

	Lsp:handle_input_buffer()

	print("TestHandleInputBuffer finished!")
end

TestHandleInputBuffer()

function TestHandleInputBufferReal()
	Lsp.buffer = ""
	Lsp.block =
		'Content-Length: 3595\r\n\r\n{"jsonrpc":"2.0","id":1,"method":"initialize","params":{"workspaceFolders":null,"trace":"off","rootUri":null,"rootPath":null,"clientInfo":{"version":"0.10.1+g7e194f0d0","name":"Neovim"},"processId":1012048,"workDoneToken":"1","capabilities":{"window":{"workDoneProgress":true,"showMessage":{"messageActionItem":{"additionalPropertiesSupport":false}},"showDocument":{"support":true}},"textDocument":{"references":{"dynamicRegistration":false},"signatureHelp":{"dynamicRegistration":false,"signatureInformation":{"documentationFormat":["markdown","plaintext"],"activeParameterSupport":true,"parameterInformation":{"labelOffsetSupport":true}}},"synchronization":{"dynamicRegistration":false,"willSaveWaitUntil":true,"didSave":true,"willSave":true},"declaration":{"linkSupport":true},"typeDefinition":{"linkSupport":true},"implementation":{"linkSupport":true},"completion":{"completionItemKind":{"valueSet":[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25]},"contextSupport":false,"dynamicRegistration":false,"completionItem":{"deprecatedSupport":false,"preselectSupport":false,"commitCharactersSupport":false,"documentationFormat":["markdown","plaintext"],"snippetSupport":false},"completionList":{"itemDefaults":["editRange","insertTextFormat","insertTextMode","data"]}},"inlayHint":{"dynamicRegistration":true,"resolveSupport":{"properties":["textEdits","tooltip","location","command"]}},"semanticTokens":{"serverCancelSupport":false,"multilineTokenSupport":false,"overlappingTokenSupport":true,"requests":{"range":false,"full":{"delta":true}},"formats":["relative"],"dynamicRegistration":false,"tokenModifiers":["declaration","definition","readonly","static","deprecated","abstract","async","modification","documentation","defaultLibrary"],"tokenTypes":["namespace","type","class","enum","interface","struct","typeParameter","parameter","variable","property","enumMember","event","function","method","macro","keyword","modifier","comment","string","number","regexp","operator","decorator"],"augmentsSyntaxTokens":true},"callHierarchy":{"dynamicRegistration":false},"publishDiagnostics":{"relatedInformation":true,"dataSupport":true,"tagSupport":{"valueSet":[1,2]}},"rename":{"dynamicRegistration":true,"prepareSupport":true},"documentSymbol":{"dynamicRegistration":false,"hierarchicalDocumentSymbolSupport":true,"symbolKind":{"valueSet":[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26]}},"hover":{"dynamicRegistration":true,"contentFormat":["markdown","plaintext"]},"definition":{"dynamicRegistration":true,"linkSupport":true},"formatting":{"dynamicRegistration":true},"rangeFormatting":{"dynamicRegistration":true},"diagnostic":{"dynamicRegistration":false},"codeAction":{"codeActionLiteralSupport":{"codeActionKind":{"valueSet":["","quickfix","refactor","refactor.extract","refactor.inline","refactor.rewrite","source","source.organizeImports"]}},"dataSupport":true,"isPreferredSupport":true,"dynamicRegistration":true,"resolveSupport":{"properties":["edit"]}},"documentHighlight":{"dynamicRegistration":false}},"general":{"positionEncodings":["utf-16"]},"workspace":{"applyEdit":true,"workspaceFolders":true,"semanticTokens":{"refreshSupport":true},"didChangeWatchedFiles":{"relativePatternSupport":true,"dynamicRegistration":false},"workspaceEdit":{"resourceOperations":["rename","create","delete"]},"symbol":{"dynamicRegistration":false,"symbolKind":{"valueSet":[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26]}},"didChangeConfiguration":{"dynamicRegistration":false},"inlayHint":{"refreshSupport":true},"configuration":true}}}}'

	Lsp:handle_input_buffer()

	print("TestHandleInputBufferReal finished!")
end

TestHandleInputBufferReal()
