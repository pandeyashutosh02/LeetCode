class Solution(object):
    def maxAscendingSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res, val=0, nums[0]
        for i in range(1, len(nums)):
            if nums[i] > nums[i-1]:
                val+=nums[i]
            else:
                res=max(res, val)
                val=nums[i]

        return max(res, val)