from typing import List

class Solution:
    def diStringMatch(self, S: str) -> List[int]:
        ans = []
        lo, hi = 0, len(S)
        for ch in S:
            if ch == "I":
                ans.append(lo)
                lo += 1
            else:
                ans.append(hi)
                hi -= 1

        return ans + [lo]