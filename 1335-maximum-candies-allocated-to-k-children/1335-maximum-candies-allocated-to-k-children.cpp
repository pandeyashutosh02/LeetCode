class Solution {
public:
    bool func(vector<int> &cand, long long k, long long val) {
        long long cnt=0;
        for(auto x : cand) {
            cnt += (x/val);
        }
        return cnt>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin(), candies.end());
        int n=candies.size();
        long long res=0, l=1, r=candies[n-1];

        while(l<=r) {
            long long mid=l+(r-l)/2;

            if(func(candies, k, mid)){
                res=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return res;
    }
};