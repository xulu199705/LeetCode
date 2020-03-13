from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        if root is None:
            return TreeNode(val)

        tmp = root
        node = TreeNode(val)

        while True:
            if tmp.val > val:
                if tmp.left is None:
                    tmp.left = node
                    return root
                else:
                    tmp = tmp.left
            else:
                if tmp.right is None:
                    tmp.right = node
                    return root
                else:
                    tmp = tmp.right
