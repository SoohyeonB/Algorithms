class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        answer = []
        route = []
        def dfs(index, route: List[int]): # 개수, 새로 들어가는 element의 인덱스
            # basecase
            # 새롭게 만든 route는 항상 넣기
            answer.append(route)

            for i in range(index, len(nums)):
                dfs(i+1, route + [nums[i]])
            

        dfs(0, route) # padding 0부터 시작
        print(answer)
        return answer
    
        