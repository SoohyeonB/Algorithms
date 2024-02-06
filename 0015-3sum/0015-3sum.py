class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        """
        nums = [-1,0,1,2,-1,-4]
        nums = [-4,-1,-1,0,1,2]
        
        풀이 1 
        - for 문 세번돌리기
        - 시간 복잡도가 O(n^3)
        for i in range(len(nums)-1):
            for j in range(i+1, len(nums)-1):
                for k in range(j+1, len(nums)-1):
                    if i+j+k == 0:
                        return [i, j, k]

        풀이 2
        투포인터 + for 문 한번
        """
        nums.sort()
        answer = []

        for i in range(len(nums)-2):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            l, r = i+1, len(nums)-1
            while l < r:
                sum = nums[i] + nums[l] + nums[r]
                if sum == 0:
                    temp = [nums[i], nums[l], nums[r]]
                    answer.append(temp)
                    while l < r and nums[l] == nums[l+1]:
                        l += 1
                    while l < r and nums[r] == nums[r-1]:
                        r -= 1
                    l += 1
                    r -= 1
                    
                elif sum < 0:
                    l += 1
                else:
                    r -= 1 

        return answer
