class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        while(true) {
            set<int> s;
            for(auto x : nums) {
                if(s.count(x))break;
                s.insert(x);
            }
            if(s.size()==nums.size())break;

            if (nums.size() <= 3)nums.clear();
            else nums.erase(nums.begin(), nums.begin() + 3);
            ans++;
        }
        return ans;
    }
};