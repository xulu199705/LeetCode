from typing import List

class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        res, i = [], 0
        while i < len(arr) - 1:
            j = i + 1
            tmp, index = arr[j], j
            while j + 1 < len(arr):
                j += 1
                if tmp < arr[j]:
                    tmp = arr[j]
                    index = j
            while i < index:
                res.append(tmp)
                i += 1
        
        res.append(-1)

        return res