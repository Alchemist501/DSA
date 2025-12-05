# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def InOrder(self,root, ls):
        if root == None:
            return
        self.InOrder(root.left, ls)
        ls.append(root.val)
        self.InOrder(root.right,ls)

    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ls = []
        self.InOrder(root,ls)
        return ls

        