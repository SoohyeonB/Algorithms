class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        # 짝수 index만 뽑아서 더하면 됨
        result = 0
        for i in range(0, len(nums), 2):
            result += nums[i]
    
        return result