class Solution(object):
    def minimumAverage(self, nums):
        """
        :type nums: List[int]
        :rtype: float
        """
        nums.sort()
        i, j = 0, len(nums)-1
        avg=float(sys.maxsize)
        while i<j:
            temp=float((nums[i]+nums[j])/2.0)
            avg=min(avg, temp)
            i=i+1
            j=j-1

        return avg

        