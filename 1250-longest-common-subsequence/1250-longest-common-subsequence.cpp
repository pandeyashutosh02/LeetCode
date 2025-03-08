class Solution {
public:
    int func(int i, int j, int m, int n, string &text1, string &text2, vector<vector<int>> &dp) {
        if(i>=m || j>=n)return 0;

        if(dp[i][j] != -1)return dp[i][j];

        if(text1[i] == text2[j]) {
            return dp[i][j] = 1+func(i+1,j+1,m,n,text1,text2,dp);
        }
        return dp[i][j] = max(func(i+1,j,m,n,text1,text2,dp), func(i,j+1,m,n,text1,text2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(), n=text2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1,-1));

        return func(0, 0, m, n, text1, text2, dp);
    }
};