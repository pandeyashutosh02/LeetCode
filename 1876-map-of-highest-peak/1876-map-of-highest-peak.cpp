class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size(), n=isWater[0].size();
        queue<pair<int, int>> q;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(isWater[i][j] == 1) {
                    q.push({i,j});
                    isWater[i][j]=0;
                }
                else isWater[i][j]=-1;
            }
        }

        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<vector<bool>> vis(m, vector<bool>(n,0));
        while(!q.empty()) {
            auto[x,y] = q.front();
            q.pop();


            for(auto[i,j] : dir) {
                int a=i+x;
                int b=j+y;;

                if(a>=0 and a<m and b>=0 and b<n and isWater[a][b] == -1) {
                    isWater[a][b] = isWater[x][y]+1;
                    q.push({a,b});
                }
            }
        }
        return isWater;
    }
};