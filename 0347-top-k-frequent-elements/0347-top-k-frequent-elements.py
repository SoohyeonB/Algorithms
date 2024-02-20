class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        return [element for element, count in collections.Counter(nums).most_common(k)]