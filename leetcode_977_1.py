from typing import List

class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        mid = 0
        while mid < len(A) - 1 and A[mid] < 0 and A[mid + 1] <0:
            mid += 1
        
        left, right = mid, mid + 1
        res = []
        while left >= 0 or right < len(A):
            if right >=len(A) or abs(A[left]) < abs(A[right]):
                res.append(A[left] ** 2)
                left -= 1
                continue
            if left < 0 or abs(A[left]) >= abs(A[right]):
                res.append(A[right] ** 2)
                right += 1
                continue

        return res
        