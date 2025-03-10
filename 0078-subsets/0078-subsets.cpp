class Solution {
public:
    vector<vector<int>> res;
    void func(int ind, vector<int> &nums, vector<int> &temp) {
        if(ind>=nums.size()) {
            res.push_back(temp);
            return;
        }

        temp.push_back(nums[ind]);
        func(ind+1,nums,temp);
        temp.pop_back();
        func(ind+1,nums,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        func(0,nums,temp);
        return res;
    }
};