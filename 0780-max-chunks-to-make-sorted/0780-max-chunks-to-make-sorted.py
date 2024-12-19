class Solution(object):
    def maxChunksToSorted(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        sum,res = 0,0
        for i in range(len(arr)):
            sum += arr[i]
            if i*(i+1)/2 == sum:
                res+=1
        return res
        