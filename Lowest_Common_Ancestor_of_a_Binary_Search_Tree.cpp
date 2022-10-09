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
    TreeNode* sol(TreeNode* root, int p, int q) 
    {
        if(root->val < q && root->val < p)
        {
            return sol(root->right,p,q);
        }
        if(root->val > q && root->val > p)
        {
            return sol(root->left,p,q);
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return sol(root, min(p->val,q->val), max(p->val,q->val)); 
            }
};