from typing import List

class Solution:
    def peakIndexInMountainArray(self, A: List[int]) -> int:
        i = 0
        while i < len(A) - 1:
            if A[i] > A[i + 1]:
                break
            i += 1

        return i