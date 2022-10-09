/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left
     ), right(right) {}
 * };
 */
class Solution {
public:
    int min_tree(TreeNode* root)
    {
        if(root->left == NULL)
        {
            return root->val;
        }
        return min_tree(root->left);
    }
    int max_tree(TreeNode* root)
    {
        if(root->right == NULL)
        {
            return root->val;
        }
        return max_tree(root->right);
    }
    bool isValidBST(TreeNode* root) {
                if(root->left != NULL && root->right !=NULL)
        {
            if((root->left->val < root->val) &&  (root->val< root->right
                ->val))
            {
                int mn = min_tree(root->right);
                int mx = max_tree(root->left);
                return mx < root->val && root->val < mn && isValidBST(root
                    ->left) && isValidBST(root->right);
            }
            return false;
        }
        if(root->left != NULL && root->right ==NULL)
        {
            if(root->left->val < root->val)
            {
                int mx = max_tree(root->left);
                return mx < root->val && isValidBST(root->left) ;
            }
            return false;
        }
        if(root->left == NULL && root->right !=NULL)
        {
            if(root->right->val > root->val)
            {
                int mn = min_tree(root->right);
                return mn > root->val && isValidBST(root->right) ;
            }
            return false;
        }
        if(root->left == NULL && root->right ==NULL)
        {
            return true;
        }
        return false;
            }
    