class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int mask=0, l=0, r=0, max_len=0;
        while(r < nums.size()) {
            while((mask&nums[r]) != 0) {
                mask^=nums[l++];
            }
            mask |= nums[r];
            max_len=max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
};