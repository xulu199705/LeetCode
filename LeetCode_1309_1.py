from typing import List

class Solution:
    def freqAlphabets(self, s: str) -> str:
        s = s + "!!"
        alphabet = ['0','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

        ans = []
        i = 0
        while s[i] != '!':
            if s[i + 2] != '#':
                ans.append(alphabet[int(s[i])])
                i += 1
            else:
                ans.append(alphabet[int(s[i: i + 2])])
                i  += 3

        return "".join(ans)
