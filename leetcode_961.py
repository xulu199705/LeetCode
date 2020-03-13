from typing import List

class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        exNum = set()
        for it in A:
            if it in exNum:
                return it
            else:
                exNum.add(it)
        return 0