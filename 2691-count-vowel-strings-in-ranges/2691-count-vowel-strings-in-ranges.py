class Solution(object):
    def vowelStrings(self, words, queries):
        """
        :type words: List[str]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        n=len(words)
        pref=[0]*n
        vowels = {'a', 'e', 'i', 'o', 'u'}
        for i in range(n):
            if words[i][0] in vowels and words[i][-1] in vowels:
                pref[i]=1
    
        for x in range(1, n):
            pref[x] += pref[x-1]

        res=[]
        for l, r in queries:
            if l==0:
                res.append(pref[r])
            else :
                res.append(pref[r] - pref[l-1])

        return res