class Solution {
public:
    static bool comparator(const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    }
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int, int> mp;
        for(auto x : nums1) {
            mp[x[0]]=x[1];
        }
        for(auto y : nums2) {
            mp[y[0]]+=y[1];
        }

        vector<vector<int>> res;
        for(auto x : mp) {
            vector<int> temp={x.first, x.second};
            res.push_back(temp);
        }

        sort(res.begin(), res.end(), comparator);

        return res;
    }
};