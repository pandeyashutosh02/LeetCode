class Solution {
public:
    int beautySum(string s) {
        int res=0;

        for(int i=0; i<s.size(); i++) {
            unordered_map<char, int> mp;
            for(int j=i; j<s.size(); j++) {
                int min_freq=INT_MAX, max_freq=0;
                mp[s[j]]++;
                if(j-i+1<3)continue;
        
                for(auto x : mp){
                    min_freq=min(min_freq, x.second);
                    max_freq = max(max_freq, x.second);
                }

                res += max_freq-min_freq;
            }
        }
        return res;
    }
};