class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> dp(n);

        dp[0]=nums[0];
        dp[1]=max(dp[0], nums[1]);

        for(int i=2; i<n; i++) {
            int take_cur = nums[i]+dp[i-2];
            int notTake_cur = dp[i-1];

            dp[i] = max(take_cur, notTake_cur);
        }
        return dp[n-1];
    }
};