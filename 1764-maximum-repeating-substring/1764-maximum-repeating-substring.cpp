class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int i=0, m=sequence.size(), n=word.size();
        int res=0;
        for(int i=0; i<m-n+1; i++) {
            int cnt=0, j=i;
            while(j+n<=m and sequence.substr(j, n)==word){
                cnt++;
                j+=n;
            }
            res=max(res, cnt);
        }
        return res;
    }
};