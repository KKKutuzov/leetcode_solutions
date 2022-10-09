class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if len(b) > len(a):
            a, b = b, a
        tmp = 0
        n, m = len(a), len(b)
        answer = ""
        for i in range(m):
            answer += str((int(a[n - i - 1]) + int(b[m - i - 1]) + tmp) % 2)
            tmp = (int(a[n - i - 1]) + int(b[m - i - 1]) + tmp) // 2
        for i in range(m, n):
            answer += str((int(a[n - i - 1]) + tmp) % 2)
            tmp = (int(a[n - i - 1]) + tmp) // 2
        if tmp == 1:
            answer += "1"
        return answer[::-1]
