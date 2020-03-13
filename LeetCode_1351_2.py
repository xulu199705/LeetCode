from typing import List

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        ans = 0

        for it in grid:
            ans += self.cntNeg(it)

        return ans

    def cntNeg(self, row: List[int]) -> int:
        left, right = 0, len(row) - 1
        res = 0

        print(row)
        while left <= right and row[right] < 0:
            mid = (left + right) // 2
            print(left," ",mid," ",right)
            if row[mid] < 0:
                res += right - mid + 1
                right = mid - 1
            else:
                left = mid + 1

        return res
