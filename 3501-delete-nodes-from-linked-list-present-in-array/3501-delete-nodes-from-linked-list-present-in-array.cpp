/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s;
        vector<int> v;
        for(auto x : nums)s.insert(x);
        ListNode *cur=head;
        while(cur) {
            if(s.find(cur->val) == s.end())v.push_back(cur->val);
            cur=cur->next;
        }

        ListNode *new_head=new ListNode(0);
        ListNode *temp=new_head;

        for(auto x : v) {
            temp->next=new ListNode(x);
            temp=temp->next;
        }
        return new_head->next;
    }
};