class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        # digits = "23"
        # digits[i번째의 [n번째]]
        # 1. 숫자와 알파벳 매칭
        # 2. dfs로 순회
            # 1) basecase: 중간 과정 string의 길이 == digits의 길이
            # 2) for문으로 n 순회
        result = []
        dicts = {
            "2":"abc",
            "3":"def",
            "4":"ghi",
            "5":"jkl",
            "6":"mno",
            "7":"pqrs",
            "8":"tuv",
            "9":"wxyz"
        }
        # i: 0 ~ len(digits)
        def dfs(i, subStr):
            if len(subStr) == len(digits):
                result.append(subStr)
                return
            for c in dicts[digits[i]]:
                # for c in "abc":
                dfs(i+1, subStr + c)
        
        if digits: 
            dfs(0, "")
        return result
