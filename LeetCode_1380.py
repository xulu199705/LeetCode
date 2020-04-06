from typing import List

class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        ans = []

        matrix_t = list(zip(*matrix))

        for row in matrix:
            luck = min(row)
            index = row.index(luck)
            col = matrix_t[index]
            if luck == max(col):
                ans.append(luck)

        return ans