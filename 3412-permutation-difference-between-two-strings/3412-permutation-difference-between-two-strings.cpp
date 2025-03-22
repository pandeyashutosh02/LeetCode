class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> ms, mt;
        for(int i=0; i<s.size(); i++) {
            ms[s[i]]=i;
            mt[t[i]]=i;
        }

        int res=0;
        for(auto x : ms) {
            if(mt.find(x.first) != mt.end()) {
                res += abs(x.second - mt[x.first]);
            }
        }
        return res;
    }
};