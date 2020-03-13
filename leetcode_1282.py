from typing import List

class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        data = []
        for i, it in enumerate(groupSizes):
            data.append([i, it])
        
        data.sort(key = lambda elem: elem[1])

        i = 0
        ans = []
        while i < len(data):
            tmp = []
            for j in range(i, i + data[i][1]):
                tmp.append(data[j][0])
            ans.append(tmp)
            i += data[i][1]

        return ans