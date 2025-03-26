class Solution {
public:
    int intersect(vector<int> &a, vector<int> &b) {
        unordered_map<int, int>mp;
        for(auto i : a)mp[i]++;
        int cnt=0;
        for(auto x : b) {
            if(mp[x] > 0) {
                cnt++;
                mp[x]=0;
            }
        }
        return cnt;
    }
    void dfs(int i, vector<vector<int>> &adj, vector<int> &vis) {
        vis[i]=1;

        for(auto x : adj[i]) {
            if(!vis[x]) {
                dfs(x,adj,vis);
            }
        }
    }
    int numberOfComponents(vector<vector<int>>& properties, int k) {
        int n=properties.size();
        vector<vector<int>> adj(n);

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(intersect(properties[i], properties[j])>=k) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int comp=0;
        vector<int> vis(n, 0);
        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                dfs(i,adj,vis);
                comp++;
            }
        }
        return comp;
    }
};