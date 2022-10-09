class Solution:
    def firstUniqChar(self, s: str) -> int:
        d = set()
        st = {}
        num = 0
        for i in range(len(s)):
            if s[i] in d:
                st.pop(s[i], None)
            else:
                d.add(s[i])
                st[s[i]] = (num, i)
                num += 1
        answer = -1
        minnum = 10000000
        for k, v in st.items():
            if v[0] < minnum:
                answer = v[1]
                minnum = v[0]
        return answer
