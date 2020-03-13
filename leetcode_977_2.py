from typing import List

class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        res = []
        for it in A:
            res.append(it ** 2)

        return sorted(res)