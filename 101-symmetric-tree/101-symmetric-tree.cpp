/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool pre1(TreeNode *first,TreeNode *second)
    {
        if(first==NULL||second==NULL)
            return first==second;
        if(first->val!=second->val)
            return false;
        return pre1(first->left,second->right) && pre1(first->right,second->left);
    }
    bool isSymmetric(TreeNode* root) {
       return (root==NULL||pre1(root->left,root->right));
    }
};