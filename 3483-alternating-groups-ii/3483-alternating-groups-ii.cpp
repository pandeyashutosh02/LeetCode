class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        vector<int> extra_colors = colors;
        for(int i=0; i<k-1; i++)extra_colors.push_back(colors[i]);

        int l=0, r=1, ctr=0;
        while(r < extra_colors.size()) {
            if(extra_colors[r]==extra_colors[r-1]) {
                l=r;
            }
            else {
                if(r-l+1 == k) {
                    ctr++;
                    l++;
                }
            }
            r++;
        }
        return ctr;
    }
};