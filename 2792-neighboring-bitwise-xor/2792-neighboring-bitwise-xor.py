class Solution(object):
    def doesValidArrayExist(self, derived):
        """
        :type derived: List[int]
        :rtype: bool
        """
        xor=0
        for i in range(len(derived)):
            xor ^= derived[i]
        return xor==0