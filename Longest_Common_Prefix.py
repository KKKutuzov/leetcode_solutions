class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        minstr = strs[0]
        for elm in strs:
            if len(elm) < len(minstr):
                minstr = elm
        answer = ""
        for i in range(len(minstr)):
            for elm in strs:
                if minstr[i] != elm[i]:
                    return answer
            answer += minstr[i]
        return answer
