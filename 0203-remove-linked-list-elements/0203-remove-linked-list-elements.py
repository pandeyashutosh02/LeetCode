# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: Optional[ListNode]
        :type val: int
        :rtype: Optional[ListNode]
        """
        if head is None:
            return head

        while head is not None and head.val==val:
            head=head.next

        cur=head
        while cur is not None and cur.next is not None:
            if cur.next.val==val:
                    cur.next=cur.next.next
            else:
                cur=cur.next

        return head

        