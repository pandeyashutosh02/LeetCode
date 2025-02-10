class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(auto x : s)mp[x]++;
        
        int od=0, res=INT_MIN;
        for(auto i : mp) {
            if(i.second%2!=0)od=max(od, i.second);
        }
        for(auto j : mp) {
            if(j.second%2==0) {
                res=max(res, od-j.second);
            }
        }
        return res;
    }
};