class Solution {
public:
    vector<string> res;
    void func(int n, int open, int close, string temp) {
        if(open==n and close==n) {
            res.push_back(temp);
            return;
        }

        if(open < n)func(n,open+1,close,temp+'(');
        if(close<open)func(n,open,close+1,temp+')');
    }
    vector<string> generateParenthesis(int n) {
        func(n,0,0,"");

        return res;
    }
};