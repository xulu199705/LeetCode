from typing import List

class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        ans = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                tmp = min(max(grid[i]), max([grid[k][j] for k in range(len(grid))]))
                ans += tmp - grid[i][j]

        return ans