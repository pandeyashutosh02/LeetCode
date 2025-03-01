class Solution(object):
    def applyOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res=[]
        n=len(nums)
        for i in range(n-1):
            if nums[i]==nums[i+1]:
                nums[i]*=2
                nums[i+1]=0
            
            if nums[i]!=0:
                res.append(nums[i])
        
        if nums[n-1]!=0:
            res.append(nums[n-1])
     
        cnt=nums.count(0)
        while cnt:
            res.append(0)
            cnt-=1
        
        return res