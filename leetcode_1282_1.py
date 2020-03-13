from typing import List

class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        exgp = [[] for i in range(501)]
        ans = []
        for i, it in enumerate(groupSizes):
            exgp[it].append(i)
            if len(exgp[it]) == it:
                ans.append(exgp[it])
                exgp[it] = []
                
        return ans