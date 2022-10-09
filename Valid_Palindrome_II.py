class Solution:
    def validPalindrome(self, s: str) -> bool:
        if len(s) == 1:
            return True
        a, b = 0,len(s)-1
        flag = 0
        if s == s[::-1]:
            return True
        for i in range(len(s)):
            if s[i] != s[-i-1]:
                a = (s[:i] + s[i+1:])
                if i != 0:
                    b = (s[:-i-1] + s[-i:])
                else:
                    b = s[:-1]
                return (a == a[::-1]) or (b == b[::-1])
                        return True
                