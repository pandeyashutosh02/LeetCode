class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> mp1, mp2;
        for(auto x : word1)mp1[x]++;
        for(auto y : word2)mp2[y]++;

        for(auto i : word1) {
            if(abs(mp1[i]-mp2[i]) > 3)return false;
        }
        for(auto i : word2) {
            if(abs(mp1[i]-mp2[i]) > 3)return false;
        }
        return true;
    }
};