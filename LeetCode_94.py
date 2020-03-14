from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

# 迭代中序遍历
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        if not root:
            return []
        ans = []
        stack = []

        while stack or root:
            while root:
                stack.append(root)
                root = root.left

            if stack:
                root = stack.pop()
                ans.append(root.val)
                root = root.right

        return ans
