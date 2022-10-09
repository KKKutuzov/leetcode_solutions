def findTop(nums, target):
    left = 0
    right = len(nums) - 1
    while right - left > 1:
        mid = (right + left) // 2
        if nums[mid] < target:
            left = mid
        elif nums[mid] > target:
            right = mid
        else:
            left = mid
    if nums[right] == target:
        return right
    elif nums[left] == target:
        return left
    else:
        return -1


def findBot(nums, target):
    left = 0
    right = len(nums) - 1
    while right - left > 1:
        mid = (right + left) // 2
        if nums[mid] < target:
            left = mid
        elif nums[mid] > target:
            right = mid
        else:
            right = mid
    if nums[left] == target:
        return left
    elif nums[right] == target:
        return right
    else:
        return -1


class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if len(nums) == 0:
            return [-1, -1]
        return [findBot(nums, target), findTop(nums, target)]
