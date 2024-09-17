class Solution {
public:
    void countWords(string& s, map<string, int>& wordCount) {
        string word = "";
        for(int i = 0; i <= s.size(); i++) {
            if(i < s.size() && isalpha(s[i])) {
                word += s[i];
            } else if(!word.empty()) {
                wordCount[word]++;
                word = "";
            }
        }
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> wordCount;
        countWords(s1, wordCount);
        countWords(s2, wordCount);
        
        vector<string> result;
        for (auto& entry : wordCount) {
            if (entry.second == 1) {
                result.push_back(entry.first);
            }
        }
        return result;
    }
};
