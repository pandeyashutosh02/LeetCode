class Solution(object):
    def minimumAbsDifference(self, arr):
        """
        :type arr: List[int]
        :rtype: List[List[int]]
        """
        arr.sort()
        n=len(arr)
        res=[]
        min_dif=sys.maxsize
        for i in range(n-1):
            dif=arr[i+1]-arr[i]
            min_dif=min(min_dif, dif)

        for i in range(n-1):
            lis=[]
            if (arr[i+1]-arr[i])==min_dif:
                lis.extend([arr[i], arr[i+1]])
                res.append(lis)

        return res


        
        