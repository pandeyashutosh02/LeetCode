class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> dif(n, vector<int>(m, 0));

        vector<int> ones_row(n), ones_col(m);

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1) {
                    ones_row[i]++;
                    ones_col[j]++;
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                dif[i][j] = ones_row[i]+ones_col[j]-(n-ones_row[i])-(m-ones_col[j]);
            }
        }
        return dif;
    }
};