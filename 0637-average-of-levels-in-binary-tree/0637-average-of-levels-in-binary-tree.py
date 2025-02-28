# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def bfs(self, root):
        res=[]
        if not root:
            return res

        q = deque([root])
    
        while q:
            n=len(q)
            if n==0: continue
            temp=0.0
            for i in range(n):
                node=q.popleft()
                temp+=node.val
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

            res.append(temp/n)
        return res

    def averageOfLevels(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[float]
        """
        return self.bfs(root)

        