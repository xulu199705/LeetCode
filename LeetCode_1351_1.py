from typing import List

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        ans = 0

        for it in grid:
            ans += self.cntNeg(it)

        return ans

    def cntNeg(self, nums: List[int]) -> int:
        if nums == []: return 0

        left, right = 0, len(nums) - 1
        mid = (left + right) // 2
        if nums[mid] < 0:
            return right - mid + 1 + self.cntNeg(nums[:mid])
        else:
            return self.cntNeg(nums[mid + 1:])
