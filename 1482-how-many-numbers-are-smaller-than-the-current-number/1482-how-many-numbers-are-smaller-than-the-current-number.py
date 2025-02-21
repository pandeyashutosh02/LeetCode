class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res=[]
        lis=nums[:]
        lis.sort()
        for i in range(len(nums)):
            idx=lis.index(nums[i])
            res.append(idx)

        return res