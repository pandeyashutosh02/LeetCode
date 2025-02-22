class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        i,j=0,0
        n=len(nums)
        min_len=n+1
        sum=0
        for j in range(n):
            sum=sum+nums[j]
                
            while sum>=target :
                lenn=j-i+1
                min_len=min(min_len, lenn)
                sum-=nums[i]
                i=i+1
            

        return 0 if min_len==n+1 else min_len


        