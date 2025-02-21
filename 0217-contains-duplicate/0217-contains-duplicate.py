class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        dic={}
        for i in nums:
            dic[i]=dic.get(i,0)+1
        
        for j in dic.values():
            if j>=2:
                return True
        return False
        