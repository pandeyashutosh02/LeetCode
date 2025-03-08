class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0, j=0, white=0, res=INT_MAX;
        while(j < blocks.size()) {
            if(blocks[j] == 'W')white++;
            if((j-i+1) == k) {
                res=min(res, white);
                if(blocks[i] == 'W')white--;
                i++;
            }
            j++;
        }
        return res;
    }
};