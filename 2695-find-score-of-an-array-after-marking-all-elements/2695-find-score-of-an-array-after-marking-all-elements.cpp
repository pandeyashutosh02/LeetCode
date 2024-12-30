class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score=0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        int n=nums.size();
        vector<bool> vis(n, false);

        for(int i=0; i<nums.size(); i++) {
            pq.push({nums[i], i});
        }

        while(!pq.empty()) {
            int ele=pq.top().first;
            int ind=pq.top().second;

            if(vis[ind] == false) {
                score += ele;
                if(ind > 0) {
                    vis[ind-1]=true;
                }
                if(ind < n-1) {
                    vis[ind+1]=true;
                }
                vis[ind]=true;
            }
            pq.pop();

        }
        return score;
    }
};