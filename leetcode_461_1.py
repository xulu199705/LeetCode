from typing import List

class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        tmp = x ^ y
        count = 0
        while tmp > 0:
            count += 1
            tmp &= tmp - 1

        return count