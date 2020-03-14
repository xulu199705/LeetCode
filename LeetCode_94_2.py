from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

# 中序遍历
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        if not root:
            return []
        return self.inorder(root)

    def inorder(self, root: TreeNode) -> List[int]:
        ans = [root.val]
        if root.left:
            ans = self.inorderTraversal(root.left) + ans
        if root.right:
            ans = ans + self.inorderTraversal(root.right)
        return ans
