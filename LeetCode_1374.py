from typing import List

class Solution:
    def generateTheString(self, n: int) -> str:
        if n % 2 == 1:
            return "".join(['a'] * n)
        else:
            return "".join(['a'] * (n - 1) + ['b'])
