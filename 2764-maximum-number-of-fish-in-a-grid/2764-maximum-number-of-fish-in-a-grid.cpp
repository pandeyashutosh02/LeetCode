class Solution {
public:
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int dfs(int i, int j, int m , int n, vector<vector<int>>& grid) {
        int val = grid[i][j];
        grid[i][j]=0;
        
        for(auto[x, y] : dir) {
            int a = i+x;
            int b = j+y;

            if(a>=0 and a<m and b>=0 and b<n and grid[a][b]>0) {
                val += dfs(a,b,m,n,grid);
            }
        }
        return val;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();

        int res=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] > 0) {
                    int val=0;
                    res = max(res, dfs(i, j, m, n, grid));
                }
            }
        }
        return res;
    }
};