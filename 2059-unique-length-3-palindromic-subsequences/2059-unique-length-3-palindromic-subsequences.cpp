class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char, pair<int, int>> mp;

        for(int i=0;i<s.size();i++) {
            if(mp.find(s[i]) == mp.end()) {
                mp[s[i]] = {i, i};
            }
            else {
                mp[s[i]].second = i;
            }
        }

        int res=0;
        for(auto x : mp) {
            set<char> uniq;
            char ch = x.first;
            int st = x.second.first, end = x.second.second;
            for(int j=st+1;j<end;j++)uniq.insert(s[j]);
            res += uniq.size();
        }
        return res;
    }
};