class Solution(object):
    def waysToSplitArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res, pref_sum, total_sum = 0, 0, sum(nums)
        n=len(nums)
        for i in range(n-1):
            pref_sum += nums[i]
            right_sum = total_sum - pref_sum
            if pref_sum >= right_sum:
                res+=1

        return res

        
        