from typing import List

class Solution:
    def numberOfSteps (self, num: int) -> int:
        x, ans = num, 0

        while x > 0:
            if x % 2 == 1:
                x = x - 1
            else:
                x = x / 2
            ans = ans + 1

        return ans
