class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        d = {}
        n = len(arr)
        for elm in arr:
            if elm in d:
                d[elm] += 1
            else:
                d[elm] = 1
        t = sorted([[k, v] for k, v in d.items()], key=lambda x: x[1], reverse=True)
        tmp_sum = 0
        answer = 0
        i = 0
        while tmp_sum < n / 2:
            answer += 1
            tmp_sum += t[i][1]
            i += 1
        return answer
