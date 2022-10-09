class Solution:
    def repeatedCharacter(self, s: str) -> str:
        d = {}
        for elm in s:
            if elm in d:
                return elm
            else:
                d[elm] = 1
