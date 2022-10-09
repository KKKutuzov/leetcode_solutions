# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:
class Solution:
    def firstBadVersion(self, n: int) -> int:
        left = 1
        right = n
        while right - left > 1:
            mid = (right + left) // 2
            if not isBadVersion(mid):
                left = mid
            else:
                right = mid
        if isBadVersion(left):
            return left
        return right
