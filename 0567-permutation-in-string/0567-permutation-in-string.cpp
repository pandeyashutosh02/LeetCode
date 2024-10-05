class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())return false;
        sort(s1.begin(), s1.end());
    
        int i=0, n=s1.size();
        while(i <= s2.size()-n) {
            string temp = s2.substr(i, n);
            sort(temp.begin(), temp.end());
            if(temp == s1)return true;
            i++;
        }
        return false;
    }
};