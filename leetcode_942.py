from typing import List

#Time Limit Exceeded
class Solution:
    def diStringMatch(self, S: str) -> List[int]:
        res = [0]
        exnum = set()
        exnum.add(0)
        for i in range(len(S)):
            if S[i] == "I":
                tmp = res[i] + 1
                while tmp in exnum: tmp += 1
                exnum.add(tmp)
                res.append(tmp)
            else:
                tmp = res[i] - 1
                while tmp in exnum: tmp -= 1
                exnum.add(tmp)
                res.append(tmp)

        minNum = min(exnum)
        for i in range(len(res)):
            res[i] -= minNum

        return res