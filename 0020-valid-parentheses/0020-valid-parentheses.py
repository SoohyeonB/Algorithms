class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracket_map = {
            ')':'(',
            '}':'{',
            ']':'['
        }

        for brackets in s:
            if brackets in bracket_map:
                #not stack == !stack.empty() in c++
                #if stack is empty or stack.top()!= bracket pair, then return false
                if not stack or stack[-1] != bracket_map[brackets]:
                    return False
                stack.pop() #if it's not (stack is not empty, and stack.top()==bracket pair, pop the top element))
            else:
                stack.append(brackets)
        return not stack
