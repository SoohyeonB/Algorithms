class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        # 1. stones를 hashmap에 넣어둠
        buckets = {}
        answer = 0

        for s in stones:
            if s not in buckets:
                buckets[s] = 1
            else:
                buckets[s] += 1
        print(buckets)
        # 2.  jewels가 hashmap에 존재하면 count++

        for j in jewels:
            if j in buckets:
                answer += buckets[j]
                
        return answer