class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        d = {}
        for elm in s:
            if elm in d:
                d[elm] += 1
            else:
                d[elm] = 1
        for elm in t:
            if elm in d:
                if d[elm] == 1:
                    d.pop(elm)
                else:
                    d[elm] -= 1
            else:
                return False
        if len(d) == 0:
            return True
        return False
