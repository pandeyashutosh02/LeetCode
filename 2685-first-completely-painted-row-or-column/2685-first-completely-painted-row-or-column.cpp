class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        unordered_map<int, pair<int, int>>mp;
        for(int x=0; x<m; x++) {
            for(int y=0; y<n; y++) {
                mp[mat[x][y]] = {x, y};
            }
        }

        vector<int> row(m,0), col(n,0);
        for(int i=0; i<m*n; i++) {
            auto[x,y] = mp[arr[i]];
            row[x]++;
            col[y]++;
            if(row[x]==n || col[y]==m)return i;  
        }
        return -1;
    }
};