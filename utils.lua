local utils = {}

---@param input_string string
---@param separator string
---@return table
function utils.split(input_string, separator)
	if separator == nil then
		separator = "%s"
	end

	local splitted_parts = {}

	for part in input_string:gmatch("([^" .. separator .. "]+)") do
		table.insert(splitted_parts, part)
	end

	return splitted_parts
end

---@param table table
---@param glue string
---@return string
function utils.join(table, glue)
	local joined = ""

	for _, value in ipairs(table) do
		joined = joined .. glue .. value
	end

	return joined
end

return utils
