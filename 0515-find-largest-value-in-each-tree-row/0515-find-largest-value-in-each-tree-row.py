# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def largestValues(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        res=[]
        if not root:
            return res

        q=[]
        q.append(root)
        while q:
            lvl_nodes=[]
            for i in range(len(q)):
                node=q.pop(0)
                lvl_nodes.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

            lvl_nodes.sort()
            res.append(lvl_nodes[-1])
            
        return res