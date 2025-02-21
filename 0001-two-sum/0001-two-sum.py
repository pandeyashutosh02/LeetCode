class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        res=[]
        for i in range(len(nums)):
            x=target-nums[i]
            if x in nums and nums.index(x)!=i:
                idx=nums.index(x)
                res.extend([i, idx])
                break
                
        return res
