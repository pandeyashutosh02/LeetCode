class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        set<int> s;
        int n=grid.size(), m=n*n, row=grid.size(), col=grid[0].size();
        int sum=(m*(m+1))/2, cal_sum=0,miss=0;
        for(int i=0; i<row*col; i++) {
            int r=i/col, c=i%col;
            int val=grid[r][c];
            if(s.find(val) != s.end())miss=val;
            else {
                s.insert(val);
                cal_sum+=val;
            }
        }

        return {miss, sum-cal_sum};
    }
};