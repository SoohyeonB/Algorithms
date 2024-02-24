class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        results = []
        prev_elements = []

        def dfs(elements):
            # base case
            if len(elements) == 0:
                results.append(prev_elements[:])
                print("results", results)
            for e in elements:
                # elements 의 모든 원소를 얕은 복사함
                next_elements = elements[:]
                next_elements.remove(e)

                prev_elements.append(e)
                print(f"e: {e}, dfs({next_elements})")
                dfs(next_elements)
                prev_elements.pop()

        dfs(nums)
        return results