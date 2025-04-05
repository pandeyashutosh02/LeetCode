class Solution {
public:
    int res=0;
    void func(int i, vector<int> nums, vector<int> &temp) {
        if(i>=nums.size()) {
            int xorr=0;
            for(auto x : temp)xorr^=x;
            res+=xorr;
            return;
        }

        temp.push_back(nums[i]);
        func(i+1, nums, temp);
        temp.pop_back();
        func(i+1,nums,temp);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> temp;
        func(0,nums,temp);
        return res;
    }
};