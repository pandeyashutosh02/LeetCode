class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n=skill.size();
        if(n==2)return skill[0]*skill[1];

        long long ans=0;
        int i=0, j=skill.size()-1;
        int f=skill[0]+skill[n-1];
        while(i < j) {
            int temp = skill[i]+skill[j];
            if(temp != f)return -1;   
            ans += skill[i]*skill[j];
            i++;j--;
        }
        return ans;
    }
};