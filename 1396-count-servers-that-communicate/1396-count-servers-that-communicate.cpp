class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        unordered_map<int, int> row, col;
        int total_servers=0, alone=0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    total_servers++;
                    row[i]++;
                    col[j]++;
                }
            }
        }

        set<pair<int, int>> s;
        for(int x=0; x<grid.size(); x++) {
            for(int y=0; y<grid[0].size(); y++) {
                if(grid[x][y] == 1) {
                    if(row[x]>=2 || col[y]>=2)s.insert({x,y});
                }
            }
        }
        return s.size();
    }
};