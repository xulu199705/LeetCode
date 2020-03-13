from typing import List

class Solution:
    def oddCells(self, n: int, m: int, indices: List[List[int]]) -> int:
        row = [0 for i in range(n)]
        col = [0 for i in range(m)]

        for i in range(len(indices)):
            row[indices[i][0]] ^= 1
            col[indices[i][1]] ^= 1
        
        count = 0
        for i in range(n):
            for j in range(m):
                count += row[i] ^ col[j]

        return count
