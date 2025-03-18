class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int, int> mp;
        int res=0, mod=1e9+7;

        for(auto a : deliciousness) {
            for(int i=0; i<22; i++) {
                int target = pow(2,i) - a;
                if(mp.find(target) != mp.end())res = (res+mp[target])%mod;
            }
            mp[a]++;
        }
        return res;
    }
};