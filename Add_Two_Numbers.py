# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> 
        Optional[ListNode]:
        answer = ListNode((l1.val + l2.val) % 10,None)
        head = answer
        tmp = (l1.val + l2.val) // 10
        while l1.next and l2.next:
            l1 = l1.next
            l2 = l2.next
            answer.next = ListNode((l1.val + l2.val + tmp) % 10,None)
            answer = answer.next
            tmp = (l1.val + l2.val + tmp) // 10
        while l1.next:
            l1 = l1.next
            answer.next = ListNode((l1.val + tmp) % 10,None)
            answer = answer.next
            tmp = (l1.val + tmp) // 10
        while l2.next:
            l2 = l2.next
            answer.next = ListNode((l2.val + tmp) % 10,None)
            answer = answer.next
            tmp = (l2.val + tmp) // 10
        if tmp != 0:
            answer.next = ListNode(tmp,None)
        return head
        