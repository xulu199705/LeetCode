from typing import List

class Solution:
    def sumZero(self, n: int) -> List[int]:
        ans = []
        if n % 2 == 1:
            ans.append(0)

        for i in range(1, n // 2 + 1):
            ans.extend([i, -i])

        return ans
