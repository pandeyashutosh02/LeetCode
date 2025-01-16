class Solution(object):
    def xorAllNums(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """
        xor1, xor2= 0, 0
        m, n=len(nums1), len(nums2)
        for i in range(m):
            xor1 ^= nums1[i]
        for j in range(n):
            xor2 ^= nums2[j]

        res=0
        if m&1:
            res ^= xor2
        if n&1:
            res ^= xor1

        return res

        