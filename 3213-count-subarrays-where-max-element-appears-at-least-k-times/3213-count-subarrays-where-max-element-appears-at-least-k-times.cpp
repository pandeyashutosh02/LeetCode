class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=0;
        for(auto x : nums) {
            if(x > maxi)maxi=x;
        }

        unordered_map<int,int> mp;
        long long slow=0, fast=0, count=0;
        while(slow < nums.size()) {
            if(mp[maxi] >= k) {
                count += nums.size()-fast+1;
                mp[nums[slow]]--;
                if (mp[nums[slow]] == 0)
                    mp.erase(nums[slow]);
                slow++;
            } 
            else {
                if(fast == nums.size())break;
                mp[nums[fast]]++;
                fast++;
            }
        }
        return count;
    }
};