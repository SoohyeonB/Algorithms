class Solution:
    # 해당 픽셀과 연결된 같은 색깔의 픽셀들을 주어진 색깔로 변경
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        def dfs(sr, sc):
            if sc<0 or sc > len(image[0])-1 or sr <0 or sr > len(image)-1 or image[sr][sc] == color or image[sr][sc] != previous_color:
                return
            
            # 현재 노드 색칠
            image[sr][sc] = color
            

            # 동서남북 탐색
            dfs(sr+1, sc) #dfs(2,1,1)
            dfs(sr-1, sc) #dfs(0,1,1)
            dfs(sr, sc+1)
            dfs(sr, sc-1)

        # dfs(1,1,1), color = 2
        previous_color = image[sr][sc]
        dfs(sr, sc)
        print(image)
        return image
        