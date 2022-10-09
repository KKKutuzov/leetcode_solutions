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
    vector<vector<int>> answer;
    vector<TreeNode*> correct;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)
        {
            return answer;
        }
        correct.push_back(root);
        while(true)
        {
            if(!func())
            {
                break;
            }
        }
        return answer;
                    }
    bool func()
    {
        vector<int> tmp(correct.size());
        vector<TreeNode*> new_correct;
        for(int i=0;i<correct.size();i++)
        {
            tmp[i] = correct[i]->val;
            if(correct[i]->left != NULL)
            {
                new_correct.push_back(correct[i]->left);
            }
            if(correct[i]->right != NULL)
            {
                new_correct.push_back(correct[i]->right);
            }
        }
        answer.push_back(tmp);
        correct = new_correct;
        if(new_correct.size() != 0)
        {
            return true;
        }
        return false;
    }
};