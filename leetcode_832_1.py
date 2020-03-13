from typing import List

class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        for i, row in enumerate(A):
            A[i] = [x ^ 1 for x in row[::-1]]
        
        return A
