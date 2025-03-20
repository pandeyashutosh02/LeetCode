class Solution {
public:
    string func(int num) {
        string ans="";
        while(num>0) {
            ans=to_string(num%2)+ans;
            num=num/2;
        }
        return ans;
    }
    int minBitFlips(int start, int goal) {   
        string s=func(start), g=func(goal);

        int len1 = s.size();
        int len2 = g.size();

        if (len1 < len2)s.insert(0, len2 - len1, '0');
        if (len2 < len1)g.insert(0, len1 - len2, '0');


        int ctr=0;
        for (int i=0; i<s.size(); i++) {  
            if(s[i] != g[i]) ctr++;
        }    

        return ctr;
    }
};