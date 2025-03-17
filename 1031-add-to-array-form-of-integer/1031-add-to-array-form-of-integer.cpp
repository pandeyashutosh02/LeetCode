class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int cary=k, i=num.size()-1;

        while(i>=0 or cary>0) {
            if(i>=0)cary+=num[i--];
            ans.push_back(cary%10);
            cary/=10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};