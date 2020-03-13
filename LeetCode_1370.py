from typing import List

class Solution:
    def sortString(self, s: str) -> str:
        ls = list(s)
        ans = []

        ls.sort()

        while len(ls) > 0:
            print(ls)
            i, ans0 = 0, []
            while i < len(ls):
                it = ls[i]
                print(it," ",i)
                if ans0 == [] or ans0 != [] and ans0[len(ans0) - 1] != it:
                    ans0.append(it)
                    ls.remove(it)
                else:
                    i += 1
            ans = ans + ans0

            if ls == []: break
            ls.reverse()

        return "".join(ans)
