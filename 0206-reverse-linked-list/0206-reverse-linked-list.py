# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        """
        1. linked list를 읽으면서 deque에 넣음 O(N)
        2. deque을 오른쪽에서부터 꺼내면서 linked list에 넣음 O(N)
        -> O(N)
        """
        dq = deque([])
        node = head
        while node:
            dq.appendleft(node.val)
            node = node.next
        
        reversed_list = ListNode()
        current = reversed_list
        while dq:
            # 다음 노드를 만들어서
            current.next = ListNode(dq.popleft())
            # 현재 노드를 다음노드로 업데이트
            current = current.next
        print(reversed_list)
        return reversed_list.next