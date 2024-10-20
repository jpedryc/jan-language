local utils = require("utils")

function TestSplit()
	local parts = utils.split("a b c d", "%s")
	assert(#parts == 4, "Not splitting correctly")

	parts = utils.split("a b c d", ";")
	assert(#parts == 1, "Not splitting correctly")

	parts = utils.split("a b ", "%s")
	assert(#parts == 2, "Not splitting correctly")

	print("TestSplit testing complete!")
end

TestSplit()

function TestEndsWith()
	assert(utils.ends_with("abcd", "cd"))
	assert(not utils.ends_with("", "cd"))
	assert(not utils.ends_with("abcd ", "cd"))
	assert(not utils.ends_with("abcd", "ab"))

	print("TestEndsWith testing complete!")
end

TestEndsWith()
