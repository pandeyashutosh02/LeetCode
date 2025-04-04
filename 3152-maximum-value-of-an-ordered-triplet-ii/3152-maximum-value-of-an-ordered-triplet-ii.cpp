class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n), suf(n);

        pref[0]=nums[0];
        for(int i=1; i<nums.size(); i++) {
            pref[i]=max(pref[i-1],nums[i]);
        }
        suf[n-1]=nums[n-1];
        for(int j=n-2; j>=0; j--) {
            suf[j]=max(suf[j+1], nums[j]);
        }

        long long res=0;
        for(int i=1; i<n-1; i++) {
            long long temp=1LL*(pref[i-1]-nums[i]);
            long long x = temp*suf[i+1];
            res = max(res, x);
            // cout<<pref[i-1]<<" "<<nums[i]<<" "<<suf[i+1]<<endl;
        }
        return res;
    }
};