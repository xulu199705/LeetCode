from typing import List

class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        left = 0
        res = ""
        while left < len(S):
            tmp = 1
            right = left + 1
            while tmp != 0:
                if S[right] == "(": tmp += 1
                else: tmp -= 1
                right += 1
            else:
                res += S[left + 1 : right - 1]
            left = right

        return res