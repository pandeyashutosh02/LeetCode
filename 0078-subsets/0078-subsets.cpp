class Solution {
public:
    vector<vector<int>> res;
    void func(int i, vector<int> &temp, vector<int> &nums) {
        if(i>=nums.size()) {
            res.push_back(temp);
            return;
        }

        func(i+1,temp,nums);
        temp.push_back(nums[i]);
        func(i+1,temp,nums);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        func(0,temp,nums);
        return res;
    }
};