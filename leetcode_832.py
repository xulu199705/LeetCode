from typing import List

class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        def flip(A: List[int]) -> List[int]:
            return [A[i] for i in range(len(A) - 1, -1, -1)]
        def invert(A:List[int]) -> List[int]:
            return [A[i] ^ 1 for i in range(len(A))]

        return [invert(flip(it)) for it in A]
