class Solution {
public:
    int ans=0;
    void check(string s1, string s2) {
        if(s1.size() > s2.size())return;
        bool pref = (s2.substr(0, s1.size()) == s1);
        bool suf = (s2.substr(s2.size()-s1.size())==s1);
        
        if(pref and suf)ans++;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            for(int j=i+1; j<words.size(); j++) {
                check(words[i], words[j]);
            }
        }
        return ans;
    }
};