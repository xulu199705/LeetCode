from typing import List

class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        tmp = sorted(nums)

        count, i = 0, 0
        while i < len(tmp):
            count += tmp[i]
            i += 2

        return count