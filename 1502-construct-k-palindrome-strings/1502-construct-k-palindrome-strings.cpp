class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k)return false;

        unordered_map<char, int> mp;
        for(auto x : s)mp[x]++;

        int count=0;
        for(auto i : mp) {
            if(i.second % 2 == 1)count++;
        }
        return count>k ? false : true;
    }
};