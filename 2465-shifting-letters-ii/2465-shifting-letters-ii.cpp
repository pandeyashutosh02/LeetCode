class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int> pref(n+1, 0);

        for(int i=0; i<shifts.size(); i++) {
            int lo=shifts[i][0];
            int hi=shifts[i][1];
            int dir=shifts[i][2];

            pref[lo] += (dir==1)?1:-1;
            pref[hi+1] += (dir==1)?-1:1;
        }

        for(int j=1; j<n; j++)pref[j]+=pref[j-1];

        for(int x=0; x<n; x++) {
            int shift = pref[x]%26;
            if(shift < 0)shift += 26;
            s[x] = 'a' + ((s[x] - 'a' + shift) % 26);
        }
        return s;
    }
};