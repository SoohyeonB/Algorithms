import sys
sys.setrecursionlimit(10000)

def solution(w, h, arry):
    answer = 0
    visited = [[False] * w for _ in range(h)]
    for i in range(h):
        for j in range(w):
            if not visited[i][j]:
                answer += dfs(i, j, w, h, arry, visited)
    print(answer)
    return

def dfs(i, j, w, h, arry, visited):
    if visited[i][j]:
        return 0
    if arry[i][j] == 0:
        return 0
    visited[i][j] = True
    for dx, dy in [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]:
        nx = i + dx
        ny = j + dy
        if 0 <= nx < h and 0 <= ny < w:
            if arry[nx][ny] == 1:
                dfs(nx, ny, w, h, arry, visited)
    return 1  

while True:
    w, h = map(int, input().split())
    if w == h == 0:
        break
    arry = []
    for _ in range(h):
        arry.append(list(map(int, input().split())))
    solution(w, h, arry)