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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> v;
        ListNode *temp=head;
        while(temp != nullptr) {
            v.push_back(temp->val);
            temp=temp->next;
        }

        unordered_map<int, int> mp;
        int pref_sum=0, l=0, r=0;

        while(r < v.size()) {
            pref_sum += v[r];

            if(mp.find(pref_sum) != mp.end() || pref_sum==0) {
                if(pref_sum==0) {
                    v.erase(v.begin(), v.begin()+r+1);
                }
                else {
                    l=mp[pref_sum]+1;
                    v.erase(v.begin()+l, v.begin()+r+1);
                    }
                r=-1;
                mp.clear();
                pref_sum=0;
            }
            else mp[pref_sum]=r;
            r++;
        }

        ListNode *new_head = new ListNode(0);
        ListNode *cur=new_head;
        for(auto x : v) {
            cur->next = new ListNode(x);
            cur=cur->next;
        }
        return new_head->next;
    }
};