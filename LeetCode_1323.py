from typing import List

class Solution:
    def maximum69Number (self, num: int) -> int:
        s = '%d'%num

        index = s.find('6')
        if -1 == index:
            return num
        else:
            s = s[:index] + "9" + s[index + 1:]

        return int(s)
