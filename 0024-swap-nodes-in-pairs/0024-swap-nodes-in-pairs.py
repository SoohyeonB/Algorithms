# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        root = prev = ListNode(None)
        prev.next = head

        while head and head.next:
            # 1, 2 순서를 바꿈
            tmp = head.next
            head.next = tmp.next
            tmp.next = head

            # 이전노드의 다음 노드를 현재 노드로 설정
            prev.next = tmp

            # 현재 노드의 next를 이전노드로 설정
            head = head.next
            prev = prev.next.next
        print(root.next)

        return root.next