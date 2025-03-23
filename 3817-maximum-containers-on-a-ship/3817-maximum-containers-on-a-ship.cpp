class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int total_decks=n*n;
        if(maxWeight<w)return 0;

        return min(maxWeight/w,total_decks);
    }
};