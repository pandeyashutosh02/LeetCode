class Solution {
public:
    vector<vector<int>> res;
    void func(int i, vector<int> &candidates, int target, vector<int> &temp) {
        if(i>=candidates.size() || target<0)return;
        if(target==0) {
            res.push_back(temp);
            return;
        }

        temp.push_back(candidates[i]);
        func(i,candidates,target-candidates[i],temp);
        temp.pop_back();
        func(i+1,candidates,target,temp);
    } 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        func(0,candidates,target,temp);
        return res;
    }
};