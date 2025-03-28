class Solution {
public:
    int maxSum(vector<int>& nums) {
        int neg=INT_MIN, cur=0;
        unordered_set<int> set;
        for(int i=0; i<nums.size(); i++) {
            neg=max(neg, nums[i]);
            if(nums[i]<=0 || set.find(nums[i]) != set.end())continue;
            cur += nums[i];
            set.insert(nums[i]);
        }
        return neg<=0 ? neg : cur;
    }
};