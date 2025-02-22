class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        
        ans=0
        minn=prices[0]
        for i in range(1, len(prices)):
            if prices[i]<minn:
                minn=prices[i]
            else :
                temp=prices[i]-minn
                ans=max(ans, temp)

        return ans
        