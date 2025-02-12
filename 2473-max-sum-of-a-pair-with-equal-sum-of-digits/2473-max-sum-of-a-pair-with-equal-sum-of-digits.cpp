class Solution {
public:
    int dig_sum(int num) {
        int sum=0;
        while(num > 0) {
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for(auto x : nums) {
            int val = dig_sum(x);
            mp[val].push_back(x);
        }

        int res=-1;
        for(auto i : mp) {
            vector<int> &v = i.second;
            if (v.size() < 2)continue;
            sort(v.rbegin(), v.rend());
            res = max(res, v[0] + v[1]);
        }
        return res;
    }
};