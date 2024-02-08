# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        """
        0. linked list를 deque으로 바꾸기
        1. 맨 뒤에서 뽑고 맨 앞과 비교
        2. linked list가 empty 될때까지 반복
        """

        current_node = head
        dq = deque([])
        # change linked list into deque
        while current_node is not None:
            dq.appendleft(current_node.val)
            current_node = current_node.next
        print(dq)

        # 맨 뒤와 맨 앞의 element를 뽑고 비교하기
        while len(dq) > 1:
            if dq.popleft() != dq.pop():
                return False
        return True