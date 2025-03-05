class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto x : nums)pq.push(x);

        vector<int> ans;
        while(!pq.empty()) {
            int alice=pq.top();
            pq.pop();
            int bob=pq.top();
            pq.pop();
            ans.insert(ans.begin(), {alice, bob});
        }
        return ans;
    }
};