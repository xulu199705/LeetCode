from typing import List

class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort(reverse=True)
        s = sum(nums)
        ans = []
        s0 = 0
        while s0 <= s:
            e = nums.pop(0)
            s -= e
            s0 += e
            ans.append(e)

        return ans