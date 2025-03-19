class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ctr=0, n=nums.size();
        for(int i=0; i<n; i++) {
            if((nums[i]==0 and i==n-2) || (nums[i]==0 and i==n-1))return -1;
            if(nums[i] == 0) {
                ctr++;
                nums[i]=(!nums[i]);
                nums[i+1]=(!nums[i+1]);
                nums[i+2]=(!nums[i+2]);
            }
        }
        return ctr;
    }
};