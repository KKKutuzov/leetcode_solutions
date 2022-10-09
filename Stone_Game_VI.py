import numpy as np
class Solution:
    def stoneGameVI(self, aliceValues: List[int], bobValues: List[int]) -> int
        :
        n = len(aliceValues)
        v = np.zeros(n)
        for i in range(n):
            v[i]  =  aliceValues[i] + bobValues[i]
        ind = np.argsort(v)
        s1=0
        s2=0
        for i in range(n):
            if i%2 ==0:
                s1+=aliceValues[ind[n-i-1]]
            else:
                s2+= bobValues[ind[n-i-1]]
        if s1<s2:
            return -1
        if s1>s2:
            return 1
        return 0
            