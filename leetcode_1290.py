from typing import List

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        tmp = ""
        while head != None :
            tmp = tmp + str(head.val) 
            head = head.next

        return int(tmp, 2)