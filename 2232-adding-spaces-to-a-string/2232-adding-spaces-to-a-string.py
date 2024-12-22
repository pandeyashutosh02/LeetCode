class Solution(object):
    def addSpaces(self, s, spaces):
        """
        :type s: str
        :type spaces: List[int]
        :rtype: str
        """
        ans=[]
        space=set(spaces)
        if 0 in space:
            ans.append(' ')
        for i in range(1,len(s)+1):
            ans.append(s[i-1])
            if i in space:
                ans+=' '

        return ''.join(ans)