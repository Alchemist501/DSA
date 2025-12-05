# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def PreOrder(self, root, ls):
        if root is None:
            return
        ls.append(root.val)
        self.PreOrder(root.left, ls)
        self.PreOrder(root.right, ls)

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ls = []
        self.PreOrder(root, ls)
        return ls
