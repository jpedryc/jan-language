---@class Stack
---@field self.buf table
---@field self.sp number
local Stack = {}

local StackMeta = {}
StackMeta.__index = Stack

function Stack.new(buf_size)
	local self = setmetatable({}, StackMeta)

	self.buf = {}
	self.sp = 0

	while buf_size > 0 do
		table.insert(self.buf, 0)
		buf_size = buf_size - 1
	end

	return self
end

---@param number number
---@return nil
function Stack:push(number)
	self.sp = self.sp + 1
	self.buf[self.sp] = number
end

---@return number
function Stack:pop()
	local number = self.buf[self.sp]
	self.sp = self.sp - 1

	return number
end

---@return number
function Stack:top()
	return self.buf[self.sp]
end

return Stack.new(256)
