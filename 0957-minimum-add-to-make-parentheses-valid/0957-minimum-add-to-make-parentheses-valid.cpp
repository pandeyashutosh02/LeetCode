class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int close=0;
        for(auto x : s) {
            if(x == '(')st.push(x);
            else {
                if(!st.empty()) {
                    st.pop();
                }
                else close++;
            }
        }

        return st.size() + close;
    }
};