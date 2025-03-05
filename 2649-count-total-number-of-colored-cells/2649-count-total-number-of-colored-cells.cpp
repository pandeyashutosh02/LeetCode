class Solution {
public:
    long long coloredCells(int n) {
        long long num=n;
        long long res = (num*num)+((num-1)*(num-1));

        return res;
    }
};