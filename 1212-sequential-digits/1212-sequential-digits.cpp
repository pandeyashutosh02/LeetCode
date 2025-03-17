class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q;
        vector<int> res;

        for(int i=1; i<9; i++)q.push(i);

        while(!q.empty()) {
            int temp=q.front();
            q.pop();

            if(temp>=low and temp<=high)res.push_back(temp);

            int rem=temp%10;
            if(rem<9) {
                int x=temp*10+(rem+1);
                if(x<=high)q.push(x);

            }
        }
        return res;
    }
};