class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> st;
        for(auto x : allowed)st.insert(x);

        int cnt=0;
        for(auto str : words) {
            bool f=true;
            for(int i=0; i<str.size(); i++) {
                if(st.find(str[i]) == st.end())f=false;
            }
            if(f)cnt++;
        }
        return cnt;
    }
};