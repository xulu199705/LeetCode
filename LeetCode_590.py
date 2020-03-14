from typing import List

class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

# 迭代后序遍历
class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        if not root:
            return []

        ans = []
        stack = [root]

        while stack:
            tmp = stack.pop()
            ans.append(tmp.val)
            # print(ans)
            stack.extend(tmp.children)
            # print([it.val for it in stack])

        return reversed(ans)
