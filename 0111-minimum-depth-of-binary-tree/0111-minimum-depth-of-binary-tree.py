# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def dfs(self, root):
        if not root:
            return float('inf')

        if root.left is None and root.right is None:
            return 1 

        left = self.dfs(root.left)
        right = self.dfs(root.right)

        return min(left, right) + 1

    def minDepth(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        if not root:
            return 0 

        return self.dfs(root)