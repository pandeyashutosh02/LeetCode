class Solution {
public:
    vector<int> res;  
    bool dfs(int ind, int parent, vector<vector<int>> &adj, vector<int> &vis) {
        vis[ind] = 1;

        for(auto x : adj[ind]){
            if(!vis[x]) {
                if(dfs(x, ind, adj, vis))return true;
            } 
            else if(x != parent){
                res = {x, ind}; 
                return true;
            }
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>> adj(n+1);
        
        for (auto &x : edges) {
            vector<int> vis(n+1, 0);
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);

            if(dfs(x[0],-1,adj,vis)) {
                return res;
            }
        }
        return res;
    }
};
