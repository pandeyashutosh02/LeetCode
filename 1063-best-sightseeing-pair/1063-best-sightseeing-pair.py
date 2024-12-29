class Solution(object):
    def maxScoreSightseeingPair(self, values):
        """
        :type values: List[int]
        :rtype: int
        """
        res=0
        maxx=values[0]
        for i in range(1, len(values)):
            res = max(res, maxx+values[i]-i)
            maxx = max(maxx, values[i]+i)
        
        return res
        