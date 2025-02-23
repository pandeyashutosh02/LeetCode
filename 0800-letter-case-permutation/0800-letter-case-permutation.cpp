class Solution {
public:
    void func(string s, int idx, string temp, vector<string> &res) {
        if(idx>=s.size()) {
            res.push_back(temp);
            return;
        }

        char ch=s[idx];
        if(isdigit(ch))func(s,idx+1,temp+char(ch),res);
        else {
            func(s,idx+1,temp+char(tolower(ch)),res);
            func(s,idx+1,temp+char(toupper(ch)),res);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string temp="";
        func(s,0,temp,res);
        
        return res;
    }
};