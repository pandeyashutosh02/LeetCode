class Solution(object):

    def sumIndicesWithKSetBits(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        ans=0
        for i in range(len(nums)):
            bin_str = bin(i)[2:]
            ones=bin_str.count('1')
            if ones==k:
                ans=ans+nums[i]

        return ans
        