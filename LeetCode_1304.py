from typing import List

class Solution:
    def sumZero(self, n: int) -> List[int]:
        ans = [x for x in range(-(n//2), n//2 + 1)]

        if n % 2 == 0:
            ans.remove(0)

        return ans
