class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums2.size();i++)mp[nums2[i]]=i;

        vector<int> ans;
        for(auto x : nums1) {
            int ind = mp[x], f=0;;
            for(int i=ind; i<nums2.size(); i++) {
                if(nums2[i] > x) {
                    ans.push_back(nums2[i]);
                    f=1;
                    break;
                }
            }
            if(f==0)ans.push_back(-1);
        }
        return ans;
    }
};