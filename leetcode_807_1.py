from typing import List

class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        row_max = []
        for i in range(len(grid)): row_max.append(max(grid[i]))
        grid_t = self.transpose(grid)
        col_max = []
        for i in range(len(grid)): col_max.append(max(grid_t[i]))

        ans = 0
        for i in range(len(grid)):
            for j in range(len(grid)):
                ans += min(row_max[i], col_max[j]) - grid[i][j]

        return ans

    def transpose(self, matrix):
        new_matrix = []
        for i in range(len(matrix[0])):
            matrix1 = []
            for j in range(len(matrix)):
                matrix1.append(matrix[j][i])
            new_matrix.append(matrix1)
        return new_matrix[::-1]
