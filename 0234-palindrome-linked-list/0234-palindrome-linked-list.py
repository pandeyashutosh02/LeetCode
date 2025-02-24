# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: bool
        """
        str1=""
        while head is not None:
            str1=str1+chr(head.val)
            head=head.next

        str2 = str1[::-1]
        if str1==str2:
            return True

        return False