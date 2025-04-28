class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> vec(n+1);
        for(int i=1; i<=n; i++) {
            int temp=i, sum=0;
            while(temp > 0) {
                sum += temp%10;
                temp /= 10;
            }
            vec[sum]++;
        }

        int cnt=0, ans=0;
        for(auto x : vec) {
            cnt=max(cnt, x);
        }

        for(auto j : vec) {
            if(j==cnt)ans++;
        }
        return ans;
    }
};