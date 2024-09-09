class Solution {
public:
    int transform(long long n) {
        long long sum=0;
        while(n > 0) {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        string str="";
        long long res=0, ans=0;
        for(int i=0;i<s.size();i++) {
            res = int(s[i]) - 96;
            ans += transform(res);
        }
        if(k<=1)return ans;
        while(k>1) {
            ans = transform(ans);
            k--;
        }
        return ans;
    }
};