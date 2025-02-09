class Solution(object):
    def countBadPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        map=defaultdict(int)
        count_good=0
        n=len(nums)
        for i in range(n):
            val=nums[i]-i
            count_good += map[val]
            map[val]+=1
        

        return (n*(n-1))//2 - count_good