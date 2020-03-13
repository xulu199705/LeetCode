from typing import List

class Solution:
    def oddCells(self, n: int, m: int, indices: List[List[int]]) -> int:
        matrix = [[0 for i in range(m)] for i in range(n)]

        for i in range(len(indices)):
            for j in range(n):
                matrix[j][indices[i][1]] += 1
            for j in range(m):
                matrix[indices[i][0]][j] += 1

        count = 0
        for i in range(n):
            for j in range(m):
                if matrix[i][j] % 2 != 0:
                    count += 1

        return count
