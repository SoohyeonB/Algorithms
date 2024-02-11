# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        
        # Make First List into integer
        decimal = 1
        current_node = l1
        first = 0
        while current_node:
            first += current_node.val * decimal
            current_node = current_node.next
            decimal *= 10
        print(first)

        # Make Second List into integer
        decimal = 1
        current_node = l2
        second = 0
        while current_node:
            second += current_node.val * decimal
            current_node = current_node.next
            decimal *= 10
        print(second)
        result = first + second

        final = ListNode()
        current_node = final
        print(len(str(result)))
        
        for i in range(len(str(result))):
            current_node.next = ListNode(result % 10)
            current_node = current_node.next
            result //= 10
        return final.next
        