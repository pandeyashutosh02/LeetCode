class Solution(object):
    def longestMonotonicSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        inc_len, dec_len=1,1
        max_inc, max_dec=1,1
        for i in range(len(nums)-1):
            if nums[i] < nums[i+1]:
                inc_len+=1
            else: inc_len=1
            max_inc=max(max_inc, inc_len)

        for i in range(len(nums)-1):
            if nums[i] > nums[i+1]:
                dec_len+=1
            else: dec_len=1
            max_dec=max(max_dec, dec_len)


        return max(max_inc, max_dec)


        