class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m=grid.size(), n=grid[0].size();
        vector<int> v(m*n);
        for(int i=0; i<m*n; i++)v[i]=(grid[i/n][i%n]);

        sort(v.begin(), v.end());

        int median = v[(m*n)/2], ans=0;
        for(auto j : v) {
            int temp = abs(median-j);
            if(temp%x != 0)return -1;
            ans+=temp/x;
        }
        return ans;
    }
};