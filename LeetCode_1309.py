from typing import List

class Solution:
    def freqAlphabets(self, s: str) -> str:
        s = s + "!!"

        ans = []
        i = 0
        while s[i] != '!':
            if s[i + 2] != '#':
                ans.append(chr(96 + int(s[i])))
                i += 1
            else:
                ans.append(chr(96 + int(s[i: i + 2])))
                i  += 3

        return "".join(ans)
