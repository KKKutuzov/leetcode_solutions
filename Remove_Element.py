class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        indx = 0
        for elm in nums:
            if elm != val:
                nums[indx] = elm
                indx += 1
        return indx
