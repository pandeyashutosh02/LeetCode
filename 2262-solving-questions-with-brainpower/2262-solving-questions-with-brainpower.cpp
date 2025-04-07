class Solution {
public:
    long long func(int i, vector<vector<int>> &questions, vector<long long> &dp) {
        if(i>=questions.size())return 0;

        if(dp[i] != -1)return dp[i];

        long long take = questions[i][0] + func(i+questions[i][1]+1, questions, dp);
        long long skip = func(i+1, questions, dp);

        return dp[i]=max(take, skip);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        if(n==1)return questions[0][0];

        vector<long long> dp(n+1, -1);

        return func(0, questions, dp);
    }
};