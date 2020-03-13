from typing import List

class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        counter = [0 for i in range(501)]
        ans = []

        for it in nums:
            counter[it] = counter[it] + 1
        for i in range(501):
            counter[i] = counter[i] + counter[i - 1]
        for it in nums:
            if it != 0:
                ans.append(counter[it - 1])
            else:
                ans.append(0)

        return ans
