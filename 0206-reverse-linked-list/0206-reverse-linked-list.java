/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode cur=head, back=null, forw=null;

        while(cur != null) {
            forw = cur.next;
            cur.next = back;
            back = cur;
            cur = forw;
        }
        return back;
    }
}