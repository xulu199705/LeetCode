from typing import List

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        ans = 0
        # col
        n = len(grid[0])
        for it in grid:
            i = 0
            while i < n and it[i] >=0:
                i += 1
            ans += n - i

        return ans
