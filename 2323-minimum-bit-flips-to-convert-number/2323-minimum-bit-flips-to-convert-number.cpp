class Solution {
public:
    int minBitFlips(int start, int goal) {   
        int xorr=start^goal;
        int res=0;

        while(xorr>0) {
            res += (xorr & 1);
            xorr >>= 1;
        }
        return res;
    }
};