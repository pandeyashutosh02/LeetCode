class Solution {
public:
    // int sum(int n) {
    //     int val=0;
    //     while(n>0) {
    //         val +=n%10;
    //         n/=10;
    //     }
    //     return val;
    // }
    int punishmentNumber(int n) {
        set<int> s= {1,9,10,36,45,55,82,91,99,100,235,297,369,370,379,414,657,675,703,756,792,909,918,945,964,990,991,999,1000};
        int res=0;
        for(int i=1; i<=n; i++) {
            if(s.count(i))res+=i*i;
        }
        return res;
    }
};