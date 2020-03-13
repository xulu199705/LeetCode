from typing import List

class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        A = sorted(A)
        for i in range(len(A) - 1):
            if(A[i] == A[i + 1]):
                return A[i]

        return 0