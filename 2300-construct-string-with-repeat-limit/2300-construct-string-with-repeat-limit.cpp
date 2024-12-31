class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> mp;
        for (auto x : s)mp[x]++;

        priority_queue<pair<char, int>> pq;
        for (auto i : mp)pq.push({i.first, i.second});

        string ans = "";
        while (!pq.empty()) {
            char ch=pq.top().first;
            int freq=pq.top().second;
            pq.pop();
            int deduct = min(repeatLimit, freq);
            ans += string(deduct, ch);
            freq -= deduct;

            if(freq > 0) {
                if(!pq.empty()) {
                    char nxt=pq.top().first;
                    int nxtfreq=pq.top().second;
                    pq.pop();
                    ans+=nxt;
                    nxtfreq--;
                    if(nxtfreq > 0)pq.push({nxt, nxtfreq});
                }
                else break;
                pq.push({ch, freq});
            }
        }
        return ans;
    }
};