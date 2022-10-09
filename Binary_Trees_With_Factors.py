class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
        MOD = 10**9 + 7
        dp = [1 for _ in arr]
        arr.sort()
        index = {x: i for i, x in enumerate(arr)}
        for i in range(len(arr)):
            for j in range(i):
                if arr[i] % arr[j] == 0:
                    right = arr[i] / arr[j]
                    if right in index:
                        dp[i] += dp[j] * dp[index[right]]
                        dp[i] %= MOD
        return sum(dp) % MOD
