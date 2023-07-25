# Solution 2 -> using hash map O(n)
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap ={}
        #fill hashmap 
        for i in range(len(nums)): 
            hashmap[nums[i]] = i
        
        #check 
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in hashmap and hashmap[complement] != i:
                return [i, hashmap[complement]]
        return []
