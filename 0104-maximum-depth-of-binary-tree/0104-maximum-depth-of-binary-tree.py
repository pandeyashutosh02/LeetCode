# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def bfs(self, root):
        count=0
        if not root:
            return 0

        q = deque([root])
        while q:
            n=len(q)
            if n==0: continue
            count+=1
            for i in range(n):
                node=q.popleft()
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

        return count
    def maxDepth(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        return self.bfs(root)
        