class Solution {
public:
    vector<vector<int>> res;
    void func(int i, vector<int> &nums, vector<int> &temp, vector<bool> &vis) {
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }

        for(int i=0; i<nums.size(); i++) {
            if(vis[i]==0) {
            temp.push_back(nums[i]);
            vis[i]=1;
            func(i+1,nums,temp,vis);
            temp.pop_back();
            vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<bool> vis(n,0);
        vector<int> temp;

        func(0,nums,temp,vis);

        return res;
    }
};