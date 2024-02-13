# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        root = head = ListNode(0)
        carry = 0
        while l1 or l2 or carry:
            summation = 0
            # 두 입력값의 합 계산
            if l1:
                summation += l1.val
                l1 = l1.next
                print(f"l1: {summation}")
            if l2:
                summation += l2.val
                l2 = l2.next
                print(f"l2: {summation}")
            
            # 몫과 나머지 계산
            carry, val = divmod(summation + carry, 10)
            head.next = ListNode(val)
            head = head.next

        return root.next