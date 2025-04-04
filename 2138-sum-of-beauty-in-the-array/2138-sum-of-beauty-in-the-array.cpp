class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n), suf(n);

        pref[0]=nums[0];
        for(int i=1; i<n; i++) {
            pref[i]=max(pref[i-1],nums[i-1]);
        }
        suf[n-1]=nums[n-1];
        for(int j=n-2; j>=0; j--) {
            suf[j]=min(suf[j+1], nums[j+1]);
        }

        int ans=0;
        for(int x=1; x<n-1; x++) {
            if(nums[x]>pref[x] and nums[x]<suf[x]) {
                ans+=2;
            }
            else if(nums[x]>nums[x-1] and nums[x]<nums[x+1]) {
                ans+=1;
            }
        }
        return ans;
    }
};