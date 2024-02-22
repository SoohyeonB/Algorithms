class Solution:
    def dfs(self, grid:List[List[str]], i:int, j:int):
        # 더이상 땅이 아닌 경우 종료
        if i<0 or i >= len(grid) or j<0 or j>=len(grid[0]) or grid[i][j] != '1':
            return
        
        # 탐색을 한 땅은 0으로 변경하여 다시 탐색하지 않도록 함
        grid[i][j] = '0'

        # 동서남북 확인
        self.dfs(grid, i+1, j)
        self.dfs(grid, i-1, j)
        self.dfs(grid, i, j+1)
        self.dfs(grid, i, j-1)
    

    def numIslands(self, grid: List[List[str]]) -> int:
        # change str into int
        # graph = [[int(i) for i in row] for row in grid]
        # print(graph)

        if not grid:
            return 0

        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                print(f'{i}, {j}: {grid[i][j]}')
                if grid[i][j] == '1':
                    self.dfs(grid, i, j)
                    # 연결된 육지 탐색이 끝나면 육지 ++
                    count += 1

        return count