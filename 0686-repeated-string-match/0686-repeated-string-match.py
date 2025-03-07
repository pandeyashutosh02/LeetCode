class Solution(object):
    def repeatedStringMatch(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        s=a
        cnt=1
        while len(s) < len(b):
            cnt+=1
            s+=a
        
        if b not in s:
            cnt+=1
            s+=a
        if b in s:
            return cnt
        return -1 
        