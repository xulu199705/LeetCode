from typing import List

class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        ans = []

        for i in range(len(nums)):
            if i % 2 == 0:
                for j in range(nums[i]):
                    ans.append(nums[i + 1])

        return ans
