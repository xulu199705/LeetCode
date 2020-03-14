from typing import List

class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

# 递归先序遍历
class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        if root == None:
            return []
        if root.children == []:
            return [root.val]
        ans = [root.val]
        for it in root.children:
            ans.extend(self.preorder(it))
        return ans
