# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        """
        swapping nodes / changing the heads and .next()
        1. 짝수번째 node를 맨 뒤에 연결
        2. 반복
        """
        if head is None:
            return head

        odd = head
        even = head.next
        even_head = head.next
        # 추가적인 공간없이 linkedlist 자체를 변경하는 것이기 때문에 head로 node연결
        while even and even.next:
            odd.next = odd.next.next
            even.next = even.next.next
            even = even.next
            odd = odd.next
        odd.next = even_head            
        return head