class Solution {
public:
    bool isInside(int a, int b, int c, int d, int r) {
        int euclid = (c-a)*(c-a) + (d-b)*(d-b);
        return euclid <= r*r; 
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto i : queries) {
            int cnt=0;
            for(auto j : points) {
                if(isInside(i[0], i[1], j[0], j[1], i[2]))cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};