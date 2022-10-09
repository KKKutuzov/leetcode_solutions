/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), 
     right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int& 
        preIndex, int left, int right) {
        // Check if are we are done with all elements
        if (left > right) {
            return NULL;
        }
                // Create the root node
        TreeNode* node = new TreeNode(preorder[preIndex++]);
                // calculate the position of current root value in inorder array
        int pos = std::find(inorder.begin(), inorder.end(), node->val) - 
            inorder.begin();
                // create the left and right subtree based on index from inorder
        node->left = buildTree(preorder, inorder, preIndex, left, pos - 1);
        node->right = buildTree(preorder, inorder, preIndex, pos + 1, right);
                return node;       
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // PreOrder Index from where the root starts
        int preIndex = 0;
                return buildTree(preorder, inorder, preIndex, 0, preorder.size() - 1);
            }
};