class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        string temp1="", temp2="";
        while(i<version1.size() or j<version2.size()) {
            while(i<version1.size() and version1[i]!='.') {
                temp1+=version1[i];
                i++;
            }
            while(j<version2.size() and version2[j]!='.') {
                temp2+=version2[j];
                j++;
            }
            int num1 = temp1.empty() ? 0 : stoi(temp1);
            int num2 = temp2.empty() ? 0 : stoi(temp2);
            
            if(num1>num2)return 1;
            if(num1<num2)return -1;
            else {
                if(i==version1.size()-1 and j==version2.size()-1)return 0;
                temp1="";
                temp2="";
            }
            
            i++;
            j++;
        }
        return 0;
    }
};