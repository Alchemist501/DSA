# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def PostOrder(self, root, ls):
        if root is None:
            return
        self.PostOrder(root.left,ls)
        self.PostOrder(root.right,ls)
        ls.append(root.val)

    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ls = []
        self.PostOrder(root, ls)
        return ls