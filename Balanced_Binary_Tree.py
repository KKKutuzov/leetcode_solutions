# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root):
        return self.checkBalanced(root)[0]
        def checkBalanced(self, root):
        if root:
            leftNode = self.checkBalanced(root.left)
            rightNode = self.checkBalanced(root.right)
            if leftNode[0] and rightNode[0] and abs(leftNode[1]-rightNode[1]
                )<=1:
                return True, max(leftNode[1], rightNode[1])+1
            else:
                return False, max(leftNode[1], rightNode[1])+1
        else:
            return True, 0