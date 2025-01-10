class Solution(object):
    def wordSubsets(self, words1, words2):
        """
        :type words1: List[str]
        :type words2: List[str]
        :rtype: List[str]
        """
        max_freq = Counter()
        for word in words2:
            word_freq = Counter(word)
            for char in word_freq:
                max_freq[char] = max(max_freq[char], word_freq[char])

        res = []
        for word in words1:
            word_freq = Counter(word)
            if all(word_freq[char] >= max_freq[char] for char in max_freq):
                res.append(word)

        return res