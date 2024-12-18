class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        if(n==1)return prices;
        vector<int> ans;
        for(int i=0; i<n;i++) {
            if(i==n-1){
                ans.push_back(prices[i]);
                break;
            }
            bool f=1;
            for(int j=i+1;j<n;j++) {
                if(prices[j] <= prices[i]) {
                    int x = prices[i]-prices[j];
                    ans.push_back(x);
                    f=1;
                    break;
                }
                else f=0;
            }
            if(f==0)ans.push_back(prices[i]);
        }
        return ans;
    }
};