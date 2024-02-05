class Solution:
    def trap(self, height: List[int]) -> int:
        if not height:
            return 0

        left_index, right_index = 0, len(height) - 1
        left_max, right_max = height[left_index], height[right_index]
        blocks = 0
        while left_index < right_index:
            if left_max < right_max:
                left_index += 1
                # 현재 값과 이전 값 중 더 큰 것을 left_max로 업데이트함
                left_max = max(left_max, height[left_index])
                blocks += left_max - height[left_index]
            else:
                right_index -= 1
                right_max = max(right_max, height[right_index])
                blocks += right_max - height[right_index]
        return blocks