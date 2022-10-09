class Solution:
    MAPPER = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}

    def romanToInt(self, s: str) -> int:
        answer = 0
        for elm in s:
            answer += Solution.MAPPER[elm]
        if ("IV" in s) or ("IX" in s):
            answer -= 2
        if ("XL" in s) or ("XC" in s):
            answer -= 20
        if ("CD" in s) or ("CM" in s):
            answer -= 200
        return answer
