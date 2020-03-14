from typing import List

class Solution:
    def sortString(self, s: str) -> str:
        ss = sorted(s)
        letters = []
        prev = ""

        for ch in ss:
            if ch == prev:
                letters[-1].append(ch)
            else:
                letters.append([ch])
                prev = ch

        ans = []
        while letters != []:
            for ch in letters:
                ans.append(ch.pop())

            letters = [row for row in letters[::-1] if row != []]

        return "".join(ans)
