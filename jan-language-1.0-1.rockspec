package = "jan-language"
version = "1.0-1"
description = {
	summary = "My new language JAN",
	detailed = [[
		This is a cool new language that I made
		]],
	homepage = "https://example.com",
	license = "MIT",
}
test = {
	type = "command",
	script = "test.lua",
}
dependencies = {
	"lua >= 5.1, < 5.4",
}
