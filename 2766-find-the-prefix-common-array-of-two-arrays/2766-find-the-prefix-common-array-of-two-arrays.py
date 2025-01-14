class Solution(object):
    def findThePrefixCommonArray(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        res=[]
        setA=set()
        setB=set()

        for i in range(len(B)):
            setA.add(A[i])
            setB.add(B[i])

            intersection = setA & setB
            res.append(len(intersection))

        return res

