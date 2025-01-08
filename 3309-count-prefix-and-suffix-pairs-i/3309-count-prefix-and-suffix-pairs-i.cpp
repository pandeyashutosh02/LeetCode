class Solution {
public:
    int ans=0;
    void check(string s1, string s2) {
        string pref="", suf="";
        set<string> st, st2;
        for(auto x : s2) {
            pref += x;
            st.insert(pref);
        }
        reverse(s2.begin(), s2.end());
        for(auto y : s2) {
            suf += y;
            st2.insert(suf);
        }
        bool flag=false;
        if(st.find(s1) != st.end())flag=true;
        reverse(s1.begin(), s1.end());
        if(st2.find(s1) == st2.end())flag=false;
        if(flag==true)ans++;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            for(int j=i+1; j<words.size(); j++) {
                check(words[i], words[j]);
            }
        }
        return ans;
    }
};