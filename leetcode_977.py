from typing import List

class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        res = []
        for i in range(len(A)):
            res.append(A[i] * A[i])

        return sorted(res)