def check(s, i, j, k):
    if len(str(int(s[:i]))) != len(s[:i]) or int(s[:i]) > 255:
        return False
    if len(str(int(s[i:j]))) != len(s[i:j]) or int(s[i:j]) > 255:
        return False
    if len(str(int(s[j:k]))) != len(s[j:k]) or int(s[j:k]) > 255:
        return False
    if len(str(int(s[k:]))) != len(s[k:]) or int(s[k:]) > 255:
        return False
    return True


class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        n = len(s)
        answer = []
        if n < 4:
            return answer
        for i in range(1, n - 2):
            for j in range(i + 1, n - 1):
                for k in range(j + 1, n):
                    if check(s, i, j, k):
                        answer.append(s[:i] + "." + s[i:j] + "." + s[j:k] + "." + s[k:])
        return answer
