class Solution {
public:
    vector<vector<int>> res;
    void func(int i, vector<int> &temp, vector<int> &v, int k) {
        if(temp.size()==k) {
            res.push_back(temp);
            return;
        }
        if(i>=v.size())return;

        func(i+1,temp,v,k);
        temp.push_back(v[i]);
        func(i+1,temp,v,k);
        temp.pop_back();

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v, temp;
        for(int i=1; i<=n; i++)v.push_back(i);
        func(0, temp, v, k);

        return res;
    }
};