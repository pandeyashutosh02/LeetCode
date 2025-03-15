class Solution {
public:
    int solve(int start, int end, vector<int>&nums) {
        if(start==end)return nums[start];
        int n=nums.size();
        vector<int> dp(n,0);
        dp[start]=nums[start];
        dp[start+1]=max(dp[start], nums[start+1]);

        for(int i=start+2; i<=end; i++) {
            int theft=nums[i]+dp[i-2];
            int no_theft=dp[i-1];

            dp[i] = max(theft, no_theft);
        }
        return dp[end];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];

        int robFrom0=solve(0,n-2,nums);
        int robFrom1=solve(1,n-1,nums);

        return max(robFrom0, robFrom1);
    }
};