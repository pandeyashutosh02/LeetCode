class Solution {
public:
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    void dfs(int i, int j, int m, int n, vector<vector<int>> &vis, vector<vector<char>>& grid) {
        vis[i][j]=1;

        for(auto[x,y] : dir) {
            int a=i+x;
            int b=j+y;

            if(a>=0 and a<m and b>=0 and b<n and vis[a][b]==0 and grid[a][b]=='1')  {
                dfs(a,b,m,n,vis,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));

        int island=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]=='1' and vis[i][j]==0) {
                    dfs(i,j,m,n,vis,grid);
                    island++;
                }
            }
        }
        return island;
    }
};