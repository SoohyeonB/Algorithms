class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        count = collections.Counter(tasks)
        # Initialize a max heap with negative counts
        maxHeap = [-cnt for cnt in count.values()]
        heapq.heapify(maxHeap)

        # time counter
        time = 0 
        q = deque() 
        while maxHeap or q:
            time += 1
            if maxHeap:
                cnt = 1 + heapq.heappop(maxHeap)
                if cnt:
                    q.append([cnt, time+n])
            if q and q[0][1] == time:
                heapq.heappush(maxHeap, q.popleft()[0])
        return time
