# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        counter = 1
        original_head = head
        # Get the length of linked list, traverse once
        while head.next is not None:
            head = head.next
            counter += 1
        
        # Traverse second time
        num_heads = int(counter / 2)
        i = 0
        while i < num_heads:
            original_head = original_head.next
            i += 1
        
        return original_head
