class Solution {
public:
    bool isUgly(int n) {
        int temp=n;
        while(temp>0) {
            if(temp==1)return true;
            
            else if(temp%2==0) {
                temp=temp/2;
            }
            else if(temp%3==0) {
                temp=temp/3;
            }
            else if(temp%5==0) {
                temp=temp/5;
            }
            else break;
        }
        return false;
    }
};