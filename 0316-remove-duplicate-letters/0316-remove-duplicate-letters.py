class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        # 앞에서부터 stack에 push
        stack = []
        counter = collections.Counter(s) # s안의 각 element 몇개인지 셈

        for char in s:
            # 만약 현재 문자가 스택에 쌓여있는 문자이고, 뒤에 똑같은 문자가 남아있으면 쌓아둔 걸 꺼내서 없앰
            counter[char] -= 1
            if char in stack:
                continue
            while stack and char < stack[-1] and counter[stack[-1]] > 0:
                stack.pop()
            stack.append(char)
        return ''.join(stack)
                