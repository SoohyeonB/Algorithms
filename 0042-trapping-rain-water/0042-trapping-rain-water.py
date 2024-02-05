class Solution:
    def trap(self, height: List[int]) -> int:
        stack = []
        volume = 0

        for i in range(len(height)):
            # when meet inflection point
            while stack and height[i] > height[stack[-1]]:
                # pop stack
                top = stack.pop()
                print("top:", top)
                # if stack is empty == 빗물을 가두지 못함
                if not stack:
                    break
                
                # 물 높이 업데이트
                distance = i - stack[-1] -1
                
                print("height[top]", height[top])
                waters = min(height[i], height[stack[-1]]) - height[top]

                volume += distance * waters
            stack.append(i)
        return volume