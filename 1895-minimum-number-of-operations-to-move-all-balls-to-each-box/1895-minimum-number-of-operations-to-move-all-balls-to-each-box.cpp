class Solution {
public:
    vector<int> minOperations(string boxes) {
        int pref=0, left=0, right=0, sum=0;
        for(int i=0; i<boxes.size(); i++) {
            if(boxes[i] == '1') {
                sum += i;
                right++;
            } 
        }

        vector<int> res(boxes.size());
        for(int j=0; j<boxes.size(); j++) {
            int temp = sum + pref;
            res[j] = temp;

            if(boxes[j] == '1') {
                left++;
                right--;
            }
            pref += left;
            sum -= right;
        }
        return res;
    }
};