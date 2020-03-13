from typing import List

class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        table = [0 for i in range(10000)]
        for it in A:
            table[it] += 1
            if table[it] >=2:
                return it

        return 0