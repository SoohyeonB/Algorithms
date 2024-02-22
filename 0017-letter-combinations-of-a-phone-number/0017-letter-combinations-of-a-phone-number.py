class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        def dfs(start, word):
            # basecase
            if len(digits) == len(word):
                output.append(word)
                return
            for i in range(start, len(digits)):
                for j in graph[digits[i]]:
                    # 다음 단어를 찾으면서, 이번에 찾은 단어를 붙여서 보냄
                    dfs(i+1, word+j)

        graph = {'2': "abc", '3':"def", "4":"ghi", "5":"jkl", "6":"mno", "7":"pqrs", "8":"tuv", "9":"wxyz"}
        
        # 결과가 담길 리스트
        output = []

        if not digits:
            return output
        # 중간에 생성된 단어를 저장할 공간
        dfs(0, "")


        return output
        

