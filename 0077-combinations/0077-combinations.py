class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        comb = []
        results = []

        def dfs(start): # 
            if len(comb) == k:
                results.append(comb[:])
                return
            for i in range(start, n+1):
                comb.append(i)
                dfs(i+1)
                comb.pop()

        dfs(1)
        return results