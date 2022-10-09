def pos(matrix, target):
    k = 0
    n = len(matrix)
    i = n - 1
    j = 0
    while i >= 0 and j < n:
        if matrix[i][j] > target:
            i -= 1
        else:
            k += i + 1
            j += 1
    return k


class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        n = len(matrix)
        i = matrix[0][0]
        j = matrix[n - 1][n - 1]
        while i < j:
            mid = i + (j - i) // 2
            posit = pos(matrix, mid)
            if posit < k:
                i = mid + 1
            else:
                j = mid
        return i
