class Solution {
public:
    int func(int n, vector<int> &dp) {
        if(n <= 0)return 0;
        if(dp[n]>0)return dp[n];
        int minn=n;
        for(int i=1; i*i<=n; i++) {
            minn = min(minn, func(n-(i*i), dp));
        }
        return dp[n] = minn+1;
    }
    int numSquares(int n) {
        vector<int> dp(n+1, 0);
        return func(n, dp);
    }
};