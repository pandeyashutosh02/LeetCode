class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans=INT_MAX;
        for(auto x : nums) {
            if(x%2==0)mp[x]++;
        }

        priority_queue<pair<int, int>> pq;
        for(auto i : mp) {
            pq.push({i.second,i.first});
        }
        while(!pq.empty()) {
            int freq=pq.top().first;
            int val=pq.top().second;
            pq.pop();
            if(pq.empty())return val;
            if(freq==pq.top().first) {
                ans=min(ans, val);
            }
            else {
                return val;
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};