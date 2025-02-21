class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        ap_sum = (n*(n+1))//2

        return ap_sum-sum(nums)
        