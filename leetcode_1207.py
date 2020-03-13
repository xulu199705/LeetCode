from typing import List

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        ex = [0 for i in range(2002)]
        for it in arr:
            ex[it + 1000] += 1

        ex.sort(reverse=True)
        i = 0
        while i < len(ex) and ex[i] > 0:
            if ex[i] == ex[i + 1]:
                return False
            i += 1

        return True