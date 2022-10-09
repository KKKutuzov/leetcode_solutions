class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        start = nums[0]
        indx = 1
        for elm in nums:
            if elm != start:
                nums[indx] = elm
                start = elm
                indx += 1
        return indx
