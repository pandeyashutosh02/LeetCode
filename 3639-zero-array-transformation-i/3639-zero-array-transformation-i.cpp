class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> dif(n+1,0);
        for(auto j : queries) {
            int x=j[0], y=j[1]+1;
            dif[x]--;
            if(y < n)dif[y]++;
        }
        int pref=0;
        for(int i=0; i<n; i++) {
            pref+=dif[i];
            nums[i]+=pref;
            if(nums[i]>0)return 0;
        }
        return 1;
    }
};