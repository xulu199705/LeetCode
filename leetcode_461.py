from typing import List

class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        tmpx, tmpy = x, y
        count = 0
        while tmpx != 0 or tmpy != 0:
            count += (tmpx % 2) ^ (tmpy % 2)
            tmpx //= 2
            tmpy //= 2

        return count