from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    a = []
    deepestRow = 0
    def deepestLeavesSum(self, root: TreeNode) -> int:
        self.scanTree(root, 0)

        s = 0
        for i in range(len(self.a)):
            if self.a[i][0] == self.deepestRow:
                s += self.a[i][1]

        return s

    def scanTree(self, root: TreeNode, row: int):
        if root == None: return
        if row > self.deepestRow: self.deepestRow = row
        self.a.append([row, root.val])
        self.scanTree(root.left, row + 1)
        self.scanTree(root.right, row + 1)
