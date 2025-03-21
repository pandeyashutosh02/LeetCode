class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();
        if(n<=2)return s;
        string ans="";
        for(int i=0; i<n-2;i++) {
            if(s[i]==s[i+1] and s[i+1]==s[i+2])continue;
            else ans+=s[i];
        }
        if (n >= 3) {
            ans += s[n-2];
            ans += s[n-1];
        } 
        return ans;
    }
};