class Solution(object):
    def tupleSameProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mp={}
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                prod=nums[i]*nums[j]
                if prod in mp:
                    mp[prod] += 1
                else:
                    mp[prod] = 1

        res=0
        for x in mp.values():
            res += 8 * (x*(x-1))/2

        return res