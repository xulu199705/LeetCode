from typing import List

class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

# 迭代先序遍历
class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        if not root:
            return []

        ans = []
        stack = [root]

        while stack:
            tmp = stack.pop()
            ans.append(tmp.val)
            # print(ans)
            stack.extend(reversed(tmp.children))
            # print([it.val for it in stack])

        return ans
