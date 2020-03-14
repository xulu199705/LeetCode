from typing import List

class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

# 迭代先序遍历
class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        if root == None:
            return []

        ans = []
        stack = []
        stack.append(root)

        while stack:
            tmp = stack.pop()
            ans.append(tmp.val)
            # print(ans)
            for i in range(len(tmp.children) - 1, -1, -1):
                stack.append(tmp.children[i])
            # print([it.val for it in stack])

        return ans
