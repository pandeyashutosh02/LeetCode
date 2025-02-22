class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size(), n=matrix[0].size();
        int top=0, down=m-1, left=0, right=n-1;
        while(top<=down and left<=right) {
            for(int i=left; i<=right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int j=top; j<=down; j++) {
                ans.push_back(matrix[j][right]);
            }
            right--;
            
            if(top<=down)
            {
                for(int x=right; x>=left; x--) {
                    ans.push_back(matrix[down][x]);
                }
                down--;
            }

            if(left<=right)
            {
                for(int y=down; y>=top; y--) {
                    ans.push_back(matrix[y][left]);
                }
                left++;
            }
        }
        return ans;
    }
};