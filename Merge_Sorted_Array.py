class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> 
        None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i,j = 0, 0
        indx = n+m-1
        while i < m and j < n:
            if nums1[m-i-1] < nums2[n-j-1]:
                nums1[indx] = nums2[n-j-1]
                j+=1
                indx -= 1
            else:
                nums1[indx] = nums1[m-i-1]
                indx -= 1
                i+=1
        while j < n:
            nums1[indx] = nums2[n-j-1]
            j+=1
            indx -=1
        