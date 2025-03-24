class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>> merge;
        merge.push_back(meetings[0]);
        for(int i=1; i<meetings.size(); i++) {
            if(merge.back()[1] >= meetings[i][0]) {
                merge.back()[1]=max(merge.back()[1],meetings[i][1]);
            }
            else merge.push_back(meetings[i]);
        }

        int ans=0;
        ans += (merge[0][0]-1);
        for(int i=1; i<merge.size(); i++) {
            ans += (merge[i][0]-merge[i-1][1])-1; 
        }
        ans += (days-merge.back()[1]);
        return ans;
    }
};