import sys
input = sys.stdin.readline

def solution():
    def dfs(depth, cost):
        nonlocal min_cost
        if depth == n:
            if graph[temp[-1]][temp[0]] != 0:
                min_cost = min(min_cost, cost + graph[temp[-1]][temp[0]])
            return

        for i in range(n):
            if visited[i] == 0 and graph[temp[-1]][i] != 0:
                visited[i] = 1
                temp.append(i)
                dfs(depth + 1, cost + graph[temp[-2]][i])
                visited[i] = 0
                temp.pop()
    
    n = int(input())
    graph = [list(map(int, input().split())) for _ in range(n)]
    min_cost = sys.maxsize
    temp = [0]  # 출발 도시를 0으로 초기화
    visited = [0 for _ in range(n)]
    visited[0] = 1

    dfs(1, 0)
    print(min_cost)

solution()
