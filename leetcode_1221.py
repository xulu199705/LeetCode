from typing import List

class Solution:
    def balancedStringSplit(self, s: str) -> int:
        count = 0

        left = 0
        while left < len(s):
            tmp = 0
            right = left
            while tmp != 0 or right == left:
                if s[right] == "R":
                    tmp += 1
                else:
                    tmp -= 1
                right += 1

            left = right
            count += 1

        return count