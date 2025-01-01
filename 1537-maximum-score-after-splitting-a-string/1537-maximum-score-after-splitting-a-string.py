class Solution(object):
    def maxScore(self, s):
        """
        :type s: str
        :rtype: int
        """
        ones=s.count('1')
        left1=0
        count0=0
        maxscore=0

        for i in range(len(s)-1):
            if s[i]=='1':
                left1+=1
            else:
                count0+=1

            right1=ones-left1
            maxscore = max(maxscore, (right1+count0)) 

        return maxscore               
        