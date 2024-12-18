class Solution(object):
    def finalPrices(self, prices):
        """
        :type prices: List[int]
        :rtype: List[int]
        """
        res=prices[:]
        stack=[]

        for i in range(len(prices)):
            while len(stack) != 0 and prices[i] <= res[stack[-1]]:
                res[stack[-1]] -= prices[i]
                stack.pop()
            stack.append(i)

        return res