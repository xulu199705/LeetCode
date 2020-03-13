from typing import List

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        summery = 0

        tmp = n
        while tmp != 0:
            product = product * (tmp % 10)
            summery = summery + (tmp % 10)
            tmp = tmp // 10

        return product - summery
