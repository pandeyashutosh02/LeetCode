class Solution {
public:
    string stringHash(string s, int k) {
        string res="";
        int x=s.size()/k;
        for(int i=0; i<x; i++) {
            int sum=0;
            for(int j=i*k; j<(i+1)*k; j++) {
                sum += s[j]-'a';
            }
            sum=sum%26;
            char ch='a'+sum;
            res += ch;
        }
        return res;
    }
};