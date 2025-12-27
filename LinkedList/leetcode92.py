# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(
        self, head: Optional[ListNode], left: int, right: int
    ) -> Optional[ListNode]:
        count = 0
        temp, start, end = head, None, None
        while temp != None:
            count += 1
            if count == left - 1:
                start = temp
            if count == right + 1:
                end = temp
                break
            temp = temp.next
        curr = start.next if start is not None else head
        prev = None
        while curr is not end and curr is not None:
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next
        if start is not None:
            start.next = prev
        else:
            head = prev
        temp = head
        count = 0
        while temp:
            count += 1
            if count == right:
                break
            temp = temp.next
        temp.next = curr
        return head