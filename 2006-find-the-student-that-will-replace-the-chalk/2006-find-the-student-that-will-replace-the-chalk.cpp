class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long tot_sum = 0;
        for(auto x : chalk)tot_sum += x;
        
        if(tot_sum <= k) {
            while(k >= tot_sum)k -= tot_sum;
        }
        if(k == 0)return 0;

        if(tot_sum > k) {
            int ind=0;
            while(k > 0) {
                if(k < chalk[ind])return ind;
                k -= chalk[ind];
                ind++;
            }
            if(k==0)return ind;
        }
        return -1;
    }
};