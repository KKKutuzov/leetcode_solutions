from scipy.special import comb


class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        bot = m - 1
        right = n - 1
        ways = bot + right
        return comb(ways, bot, exact=True)
