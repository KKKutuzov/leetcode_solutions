/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        bool a = (root->left == NULL || (root->val == root->left->val) && 
            (isUnivalTree(root->left)));
        bool b = (root->right == NULL || (root->val == root->right->val) && 
            (isUnivalTree(root->right)));
        return a&b;
            }
};