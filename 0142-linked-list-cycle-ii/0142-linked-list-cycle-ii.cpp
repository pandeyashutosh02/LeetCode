/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)return nullptr;
        ListNode *slow=head, *fast=head;

        while(slow != nullptr and fast != nullptr and fast->next != nullptr) {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast) {
                ListNode *cur=head;
                while(cur != slow) {
                    slow=slow->next;
                    cur=cur->next;
                }
                return cur;
            }
        }
        return nullptr;
    }
};