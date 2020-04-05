from typing import List

class Solution:
    def minDeletionSize(self, A: List[str]) -> int:
        ans = 0

        for col in zip(*A):
            if sorted(col) != list(col):
                ans += 1

        return ans
