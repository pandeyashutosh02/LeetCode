class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x : nums)mp[x]++;

        int dominant=0, maxx=0;
        for(auto i : mp) {
            if(i.second>maxx) {
                maxx=max(maxx, i.second);
                dominant=i.first;
            }
        }

        int i=0, left_cnt=0, right_cnt=maxx;
        while(i<nums.size()) {
            if(nums[i] == dominant) {
                left_cnt++;
                right_cnt--;

                if(left_cnt > (i+1)/2 and right_cnt > (nums.size()-i-1)/2)return i;
            }
            i++;
        }
        return -1;
    }
};