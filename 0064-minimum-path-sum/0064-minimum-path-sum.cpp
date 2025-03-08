class Solution {
public:
    int func(int i, int j, int m, int n, vector<vector<int>> &grid, vector<vector<int>> &dp) {
        if(i==m-1 and j==n-1)return grid[i][j];

        if(i>=m || j>=n)return INT_MAX;

        if(dp[i][j] != -1)return dp[i][j];

        return dp[i][j] = grid[i][j] + min(func(i+1,j,m,n,grid,dp), func(i,j+1,m,n,grid,dp));

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return func(0,0,m,n,grid,dp);
    }
};