# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = 0
        scale = 1

        while l1:
            num1 += l1.val * scale
            l1 = l1.next
            scale *= 10

            
                
        num2 = 0
        scale = 1
        while l2:
            num2 += l2.val * scale
            l2 = l2.next
            scale *= 10



        total = str(num1 + num2)
        
        next = None
        for i in range(0,len(total)):
            next = ListNode(int(total[i]), next)

        return next

 