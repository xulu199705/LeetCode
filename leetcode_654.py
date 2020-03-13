from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> TreeNode:
        if len(nums) == 0:
            return None

        val = max(nums)
        index = nums.index(val)
        
        root = TreeNode(val)
        if index != 0:
            root.left = self.constructMaximumBinaryTree(nums[:index])
        if index != len(nums) - 1:
            root.right = self.constructMaximumBinaryTree(nums[index + 1:])

        return root