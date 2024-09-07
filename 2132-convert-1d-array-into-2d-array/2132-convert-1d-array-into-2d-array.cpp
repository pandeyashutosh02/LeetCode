class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(m*n != original.size())return ans;
        
        int ind=0, ctr=1;
        vector<int> temp;
        while(m--) {
            int i;
            for(i=ind; i<ctr*n; i++) {
                temp.push_back(original[i]);
                ind=i;
            }
            ans.push_back(temp);
            temp.clear();
            ind++;
            ctr++;
        }
        return ans;
    }
};