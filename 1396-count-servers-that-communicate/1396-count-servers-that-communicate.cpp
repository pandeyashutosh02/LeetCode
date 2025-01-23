class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int> row(m,0), col(n,0);
        int res=0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }

        for(int x=0; x<grid.size(); x++) {
            for(int y=0; y<grid[0].size(); y++) {
                if(grid[x][y] == 1 and (row[x]>=2 || col[y]>=2))res++;
            }
        }
        return res;
    }
};