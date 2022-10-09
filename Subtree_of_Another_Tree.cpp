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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return  isSubtree_2(root,subRoot,true);
    }
        bool isSubtree_2(TreeNode* root, TreeNode* subRoot,bool ishead) {
        if(root == NULL && subRoot != NULL)
        {
            return false;
        }
        if(root == NULL && subRoot == NULL)
        {
            return true;
        }
        if(subRoot == NULL && root != NULL)
        {
            return false;
        }
        if(root->val == subRoot->val)
        {
            if(isSubtree_2(root->left,subRoot->left,false) & isSubtree_2(root
                ->right,subRoot->right,false))
            {
                return true;
            }
        }
        if(ishead)
        {
            return isSubtree_2(root->left,subRoot,true) |  isSubtree_2(root
                ->right,subRoot,true);
        }
        return false;
    }
};