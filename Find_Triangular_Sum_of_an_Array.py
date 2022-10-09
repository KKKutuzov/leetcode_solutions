class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        answer = 0
        for i, elm in enumerate(nums):
            answer += elm * math.comb(len(nums) - 1, i) % 10
        return answer % 10
