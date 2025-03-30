class Solution {
public:
    bool isInside(int a, int b, int c, int d, int r) {
        int euclid = (c-a)*(c-a) + (d-b)*(d-b);
        return euclid <= r*r; 
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0; i<queries.size(); i++) {
            int cnt=0;
            for(int j=0; j<points.size(); j++) {
                if(isInside(queries[i][0], queries[i][1], points[j][0], points[j][1], queries[i][2]))cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};