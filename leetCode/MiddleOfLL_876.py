# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        count, middle = 1, 0
        temp = head
        while temp.next != None:
            temp = temp.next
            count += 1
        middle = count // 2
        i = 0
        temp = head
        while i < middle:
            temp = temp.next
            i += 1
        return temp
