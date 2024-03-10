import sys
import heapq
from heapq import heappop, heappush

input = sys.stdin.readline

def solution():
    n = int(input())
    times = []
    answer = 0
    for _ in range(n):
        times.append(list(map(int, input().split())))
    
    # time을 min heap 형태로 정렬
    times.sort(key=lambda x : (x[0], x[1]))
    
    # heap에 저장    
    heap = [times[0][1]]
    for i in range(1, n):
        if heap[0] <= times[i][0]:
            heappop(heap)
        heappush(heap, times[i][1])
    answer = len(heap)
    return answer
    
    
print(solution())