# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        # linked list into list
        nums = []
        for head in lists:
            print(head)
            node = head
            while node:
                nums.append(node.val)
                node = node.next
        # list into linked list
        nums.sort()

        head = answer = ListNode()
        for n in nums:
            node = ListNode(n)
            head.next = node
            head = head.next
        return answer.next
            