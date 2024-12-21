class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string temp="";
        int counter=1;
        for(int i=0;i<sentence.size();i++) {
            if(sentence[i]!=' ') {
                temp+=sentence[i];
                if(temp==searchWord)return counter;
            }
            else {
                temp="";
                counter++;
            }
        }
        return -1;
    }
};