class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        table = {
            ')': '(',
            '}': '{',
            ']': '['
        }
        
        for c in s:
            # 괄호가 열리는거라면
            if c not in table:
                stack.append(c) # stack에 추가
            # stack이 비어있거나 괄호 쌍이 안맞으면 False
            elif not stack or table[c] != stack.pop():
                return False
        return len(stack) == 0