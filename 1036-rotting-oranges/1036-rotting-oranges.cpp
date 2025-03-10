class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int, int>> dir = {{0,1}, {1,0}, {-1,0}, {0,-1}};
        int m=grid.size(), n=grid[0].size();
        int fresh=0;
        queue<pair<int, int>> q;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 2) {
                    q.push({i,j});
                }
                if(grid[i][j]==1)fresh++;
            }
        }

        int time=0;
        while(!q.empty() and fresh>0) {
            int sz=q.size();
            time++;
            for(int i=0; i<sz; i++) {
                auto[x,y]=q.front();
                q.pop();

                for(auto [a,b] : dir) {
                    int na=x+a, nb=y+b;
                    if(na>=0 and nb>=0 and na<m and nb<n and grid[na][nb]==1) {
                        grid[na][nb]=2;
                        fresh--;
                        q.push({na,nb});
                    }
                }
            }
        }
        return fresh==0 ? time : -1;
    }
};