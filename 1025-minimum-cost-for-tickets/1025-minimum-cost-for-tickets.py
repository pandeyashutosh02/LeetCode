class Solution(object):
    def solve(self, days, costs, pos, dp):
        if pos >= len(days):
            return 0

        if dp[pos] != -1:
            return dp[pos]

        path1 = costs[0] + self.solve(days, costs, pos+1, dp)

        ind=pos
        while ind<len(days):
            if days[ind]>=days[pos]+7:
                break
            ind+=1
        path2 = costs[1] + self.solve(days, costs, ind, dp)
        
        while ind<len(days):
            if days[ind]>=days[pos]+30:
                break
            ind+=1
        path3 = costs[2] + self.solve(days, costs, ind, dp)

        dp[pos] = min(path1, path2, path3)
        return min(path1, path2, path3)

    def mincostTickets(self, days, costs):
        """
        :type days: List[int]
        :type costs: List[int]
        :rtype: int
        """
        n=len(days)
        dp=[-1]*n

        return self.solve(days, costs, 0, dp)

        