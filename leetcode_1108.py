from typing import List

class Solution:
    def defangIPaddr(self, address: str) -> str:
        res = ""
        for ch in address:
            if ch != '.':
                res = res + ch
            else:
                res = res + "[.]"
        return res