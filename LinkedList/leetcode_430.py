class Solution:
    def flatten(self, head: "Optional[Node]") -> "Optional[Node]":
        stack = []
        temp = head
        while temp :
            if temp.child:
                if temp.next:
                    stack.append(temp.next)
                temp.child.prev = temp
                temp.next = temp.child
                temp.child = None
            if not temp.next and stack:
                temp.next = stack.pop()
                temp.next.prev = temp
            temp = temp.next
        return head