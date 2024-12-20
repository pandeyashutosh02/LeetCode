# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def reverseOddLevels(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: Optional[TreeNode]
        """
        if not root:
            return root

        q=deque([root])
        lev = 0
        while q:
            n = len(q)
            temp = []
            
            for i in range(n):
                node=q.popleft() 
                temp.append(node)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

            if lev%2 != 0:
                 i,j = 0,len(temp)-1
                 while i < j:
                    temp[i].val, temp[j].val = temp[j].val, temp[i].val
                    i += 1
                    j -= 1
            
            lev += 1

        return root
            

            
            

