from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    elem = []
    def bstToGst(self, root: TreeNode) -> TreeNode:
        self.scanBST(root)
        self.elem.sort()
        
        ans = self.modifyBST(root)

        return ans

    def scanBST(self, root: TreeNode):
        if root == None: return
        self.elem.append(root.val)
        self.scanBST(root.left)
        self.scanBST(root.right)
        return

    def modifyBST(self, root: TreeNode) -> TreeNode:
        if root == None: return root
        
        root.left = self.modifyBST(root.left) 
        root.right = self.modifyBST(root.right)
        
        index = self.elem.index(root.val)
        root.val = sum(self.elem[index:])
        return root
