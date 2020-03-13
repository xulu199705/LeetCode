from typing import List

class Solution:
    def maximum69Number (self, num: int) -> int:
        ls = list('%d'%num)
        ans = 0

        try:
            index = ls.index(6)
            ls[index] = 9

            for it in ls:
                ans = ans * 10 + it

            return ans
        except ValueError as err:
            ans = num
        finally:
            return ans
