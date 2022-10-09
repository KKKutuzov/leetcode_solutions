class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n <= 0:
            return False
        power = math.log(n) / math.log(4)
        return power == int(power)
