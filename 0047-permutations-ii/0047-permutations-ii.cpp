class Solution {
public:
    set<vector<int>> sett;
    void func(int i, vector<int> &nums, vector<int> &temp, vector<int> &vis) {
        if(temp.size() == nums.size()) {
            sett.insert(temp);
            return;
        }

        for(int i=0; i<nums.size(); i++) {
            if(vis[i]==0) {
                temp.push_back(nums[i]);
                vis[i]=1;
                func(i+1, nums, temp, vis);
                temp.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp, vis(nums.size(),0);
        func(0, nums, temp, vis);

        for(auto i : sett)res.push_back(i);

        return res;
    }
};