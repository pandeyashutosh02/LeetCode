class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum1=INT_MIN, sum2=INT_MAX, temp=0;
        for(int i=0; i<nums.size(); i++) {
            temp += nums[i];
            sum1=max(temp, sum1);
            if(temp < 0)temp=0;
        }
        temp=0;
        for(int i=0; i<nums.size(); i++) {
            temp += nums[i];
            sum2=min(sum2, temp);
            if(temp > 0)temp=0;
        }
        return max(abs(sum1),abs(sum2));
    }
};