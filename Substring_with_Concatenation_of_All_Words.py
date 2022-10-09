class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        n = len(words)
        k = len(words[0])
        answer = []
        cnt = Counter(words)
                def check(ind):
            hash_map = dict(cnt)
            for i in range(n):
                if s[ind + i*k:ind + (i+1)*k] in hash_map:
                    if hash_map[s[ind + i*k:ind + (i+1)*k]] > 1:
                        hash_map[s[ind + i*k:ind + (i+1)*k]] -= 1
                    elif hash_map[s[ind + i*k:ind + (i+1)*k]] == 1:
                        hash_map.pop(s[ind + i*k:ind + (i+1)*k],None)
                else:
                    return False
            return len(hash_map) == 0
        for i in range(len(s) - n*k + 1):
            if check(i):
                answer.append(i)
        return answer
                