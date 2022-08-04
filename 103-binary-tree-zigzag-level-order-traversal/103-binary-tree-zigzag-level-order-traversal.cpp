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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int flag=1;
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
            return ans;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++)
            {
                TreeNode *x=q.front();
                q.pop();
                temp.push_back(x->val);
                if(x->left!=NULL)
                q.push(x->left);
                if(x->right!=NULL)
                    q.push(x->right);
            }
            if(flag==0)
            {
                reverse(temp.begin(),temp.end());
                    flag=1;
            }
            else
                flag=0;
            ans.push_back(temp);
        }
        return ans;
    }
};