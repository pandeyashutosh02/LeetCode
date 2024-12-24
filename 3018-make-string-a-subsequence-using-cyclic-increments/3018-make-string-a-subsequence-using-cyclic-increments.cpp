class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n=str1.size(), m=str2.size();
        if(n < m)return false;

        int i=0, j=0;
        while(i < n and j < m) {
            if(str1[i] == str2[j] or ((str1[i] == 'z') ? 'a' : str1[i] + 1) == str2[j])j++;
            i++;
        }
        return j==m;
    }
};