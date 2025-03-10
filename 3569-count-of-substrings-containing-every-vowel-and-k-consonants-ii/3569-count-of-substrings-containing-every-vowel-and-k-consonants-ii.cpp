class Solution {
public:
    bool isVow(char ch) {
        static const unordered_set<char> vowels={'a','e','i','o','u'};
        return vowels.count(ch);
    }
    long long func(string &word, int k) {
        int i=0, j=0;
        long long cnt=0, cons=0;
        unordered_map<char, int> vowel;
        while(j < word.size()) {
            if(isVow(word[j]))vowel[word[j]]++;
            else cons++;

            while(vowel.size()==5 and cons>=k) {
                cnt+=word.size()-j;
                if(isVow(word[i])) {
                    vowel[word[i]]--;
                    if(vowel[word[i]]==0)vowel.erase(word[i]);
                }
                else cons--;
                i++;
            }
            j++;
        }
        return cnt;
    }
    long long countOfSubstrings(string word, int k) {
        return func(word,k)-func(word,k+1);
    }
};