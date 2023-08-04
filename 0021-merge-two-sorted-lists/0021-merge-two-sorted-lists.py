# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    #list1과 list2의 크기를 비교하여 작은 순으로 newList에 연결
    #going to return list1 which is linked with list2
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        #return 할 새로운 연결리스트
        newList = ListNode()

        #삽입할 노드
        currentNode = newList

        while True:
            #list1이 비어있으면 list2 리턴
            if list1 is None:
                currentNode.next = list2
                break
            elif list2 is None:
                currentNode.next = list1
                break

            if list1.val > list2.val:
                currentNode.next = ListNode(list2.val)
                list2 = list2.next
            else: #list1.val <= list2.val
                currentNode.next = ListNode(list1.val)
                list1 = list1.next
            #update!!!!
            currentNode = currentNode.next
        return newList.next
        #만약 둘 중 하나라도 비어있으면 각 리스트 자체가 답이므로 그 자체를 리턴
        if list1:
            return list1
        else:
            return list2
                
        
