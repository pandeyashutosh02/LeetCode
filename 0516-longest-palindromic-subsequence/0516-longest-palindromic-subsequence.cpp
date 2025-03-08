class Solution {
public:
    int func(int i, int j, int m, int n, string &s, string &rev, vector<vector<int>> &dp) {
        if(i>=m || j>=n)return 0;

        if(dp[i][j] != -1)return dp[i][j];

        if(s[i] == rev[j])return dp[i][j] = 1 + func(i+1,j+1,m,n,s,rev,dp);

        return dp[i][j] = max(func(i+1,j,m,n,s,rev,dp), func(i,j+1,m,n,s,rev,dp));
    }
    int longestPalindromeSubseq(string s) {
        string temp=s;
        reverse(s.begin(), s.end());
        int n=s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        return func(0, 0, n, n, temp, s, dp);
    }
};