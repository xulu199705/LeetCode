from typing import List

class Solution:
    def judgeCircle(self, moves: str) -> bool:
        pos = 0+0j
        for ch in moves:
            if ch == "U":
                pos += 0+1j
            elif ch == "D":
                pos += 0-1j
            elif ch == "R":
                pos += 1
            elif ch == "L":
                pos += -1

        return pos == 0+0j