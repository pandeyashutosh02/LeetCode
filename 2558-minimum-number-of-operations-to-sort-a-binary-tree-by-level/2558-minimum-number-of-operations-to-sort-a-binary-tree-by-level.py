# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def minimumOperations(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        
        if not root:
            return 0
        swps=0
        q=[root]
        while q:
            n=len(q)
            temp=[]
            for i in range(n):
                node=q.pop(0)
                temp.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

            copy=temp[:]
            copy.sort()
            myMap={}
            for i, val in enumerate(temp):
                myMap[val] = i
            for i in range(len(temp)):
                if temp[i] != copy[i]:
                    ind = myMap.get(copy[i])
                    myMap[temp[i]]=ind
                    temp[ind]=temp[i]
                    swps+=1

        return swps