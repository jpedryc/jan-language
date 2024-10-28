local rpc = require("rpc.rpc")

function TestEncodeMessage()
	assert(
		rpc.encode_message({ method = "abc", params = { 1, 2, 3 } })
			== 'Content-Length: 33\r\n\r\n{"method":"abc","params":[1,2,3]}'
	)

	print("TestEncodeMessage testing complete!")
end

TestEncodeMessage()

function TestDecodeMessage()
	assert(rpc.decode_message('Content-Length: 33\r\n\r\n{"method":"abc","params":[1,2,3]}').params[3] == 3)

	print("TestDecodeMessage testing complete!")
end

TestDecodeMessage()
