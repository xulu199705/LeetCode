from typing import List

class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res = []
        for i in range(left, right + 1):
            tmp = i
            flag = True
            while tmp != 0:
                if (tmp % 10 == 0) \
                or (tmp % 10 != 0 and i % (tmp % 10) != 0):
                    flag = False
                    break
                tmp //= 10
            if flag: res.append(i)

        return res