# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def isSameTree(p, q):
    if p == None or q == None:
        return p == q
    if p.val != q.val:
        return False
    a = isSameTree(p.right, q.left)
    b = isSameTree(p.left, q.right)
    if a and b:
        return True
    return False


class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root == None:
            return True
        return isSameTree(root.left, root.right)
