from typing import List

class Solution:
    def sortString(self, s: str) -> str:
        alphabet = [0 for i in range(26)]
        for it in s:
            alphabet[ord(it) - 97] += 1

        ans = []
        step = 1
        length = len(s)
        while length > len(ans):
            i = (25 - 25 * step) // 2
            while (step == 1 and i <= 25) \
                or (step == -1 and i >= 0):
                if alphabet[i] > 0:
                    ans.append(chr(i + 97))
                    alphabet[i] -= 1
                i += step

            step = 0 - step

        return "".join(ans)
