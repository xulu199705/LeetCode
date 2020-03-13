from typing import List

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        return sum(e < 0 for row in grid for e in row)
