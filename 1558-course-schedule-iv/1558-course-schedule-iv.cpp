class Solution {
public:
    bool dfs(int s, int e, vector<vector<int>> &adj, vector<int> &vis) {
        if(s==e)return true;
        vis[s]=1;

        for(auto x : adj[s]) {
            if(!vis[x]) {
                if(dfs(x,e,adj,vis))return true;
            }
        }
        return false;
    }
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<int>> adj(numCourses);
        for (auto i : prerequisites) {
            adj[i[0]].push_back(i[1]);
        }

        vector<bool> ans;
        for(auto i : queries) {
            vector<int> vis(numCourses, 0);
            ans.push_back(dfs(i[0], i[1], adj, vis));
        }
        return ans;
    }
};