class Solution:
    def minimumReplacement(self, nums: List[int]) -> int:
        dp = [[0,0] for i in range(len(nums))]
        n = len(nums)
        dp[0] = [0,nums[-1]]
                for i in range(1,len(nums)):
            if nums[n-1-i] <= dp[i-1][1]:
                dp[i][1] = nums[n-1-i]
                dp[i][0] = dp[i-1][0]
                continue
            if nums[n-1-i] % dp[i-1][1] == 0:
                dp[i][0] = dp[i-1][0] + (nums[n-1-i] // dp[i-1][1] - 1)
                dp[i][1] = dp[i-1][1]
                continue
            else:
                dp[i][0] = dp[i-1][0] + (nums[n-1-i] // dp[i-1][1])
                times = nums[n-1-i] // dp[i-1][1]
                dp[i][1] = (nums[n-1-i]) // (times+1)
        return dp[-1][0]
                        