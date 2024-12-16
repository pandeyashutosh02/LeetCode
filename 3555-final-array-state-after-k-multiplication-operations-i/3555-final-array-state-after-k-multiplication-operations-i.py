class Solution(object):
    def getFinalState(self, nums, k, multiplier):
        """
        :type nums: List[int]
        :type k: int
        :type multiplier: int
        :rtype: List[int]
        """
        while(k>0):
            min=sys.maxsize
            idx=0
            for i in range(len(nums)):
                if(nums[i] < min):
                    min=nums[i]
                    idx=i
            nums[idx]*=multiplier
            k-=1
   
        return nums
                    
        