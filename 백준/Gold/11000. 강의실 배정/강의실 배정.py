import sys
from heapq import heappush, heappop
input = sys.stdin.readline

def solution():
    n = int(input())
    classes = []
    for _ in range(n):
        classes.append(list(map(int, input().split())))
    classes.sort(key=lambda x: (x[0], x[1]))
    
    end_time = [classes[0][1]]
    for i in range(1, n):
        if end_time[0] <= classes[i][0]:
            heappop(end_time)
        heappush(end_time, classes[i][1])
        
    
    return len(end_time)
    
print(solution())