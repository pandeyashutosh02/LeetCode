class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(auto x : nums)pq.push(x);

        int res=0;
        while(pq.top() < k) {
            if (pq.size() < 2) return -1;
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();

            long long val = min(x,y)*2 + max(x,y);
            pq.push(val);
            res++;
        }
        return res;
    }
};