class Solution {
public:
    bool dfs(int ind, vector<int> adj[], vector<int> &vis, vector<int> &visited) {
        vis[ind]=1;
        visited[ind]=1;

        for(auto x : adj[ind]) {
            if(!vis[x]) {
                if(dfs(x, adj, vis, visited)==true)return true;
            }
            else if(visited[x])return true;
        }

        visited[ind]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int> adj[v];

        for(int i=0;i<v;i++){
            for(auto x : graph[i])adj[i].push_back(x);
        }

        vector<int> vis(v,0), visited(v,0), res;

        for(int i=0; i<v; i++) {
            if(!vis[i]) {
                dfs(i, adj, vis, visited);
            }
        }

        for(int i=0; i<v; i++) {
            if(visited[i] == 0)res.push_back(i);
        }

        return res;
    }
};