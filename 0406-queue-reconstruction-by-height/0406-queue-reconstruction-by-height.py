import heapq

class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        max_heap = []
        for person in people:
            # max_heap을 만들기 위해서 0번째 인덱스 음수처리
            heappush(max_heap, (-person[0], person[1]))

        result = []
        while max_heap:
            # head를 뽑고 heap은 바로 다시 재정렬됨
            person = heappop(max_heap)
            # pop한 head의 순서에 맞는 인덱스에 [-person[0], person[1]]을 넣음
            result.insert(person[1], [-person[0], person[1]])
        return result