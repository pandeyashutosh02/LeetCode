class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int max_water=0;
        while(i < j) {
            int a = min(height[i], height[j]);
            int b = abs(i-j);

            int area = a*b;
            max_water = max(area, max_water);
            cout<<max_water<<" ";
            if(height[i] < height[j])i++;
            else if(height[i] > height[j])j--;
            else {
                i++;j--;
            }
        }
        return max_water;
    }
};