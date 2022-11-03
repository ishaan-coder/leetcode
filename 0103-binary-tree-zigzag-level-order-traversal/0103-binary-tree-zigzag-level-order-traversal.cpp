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
        
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        int flag=1;
        while(!q.empty())
        {
            int x=q.size();
            vector<int>temp;
           
            while(x--)
            {
                 
                TreeNode* front=q.front();
                temp.push_back(front->val);
                q.pop();
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
                
            }
            if(flag==0)
            {
                flag=1;
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
            }
            else
            {
                flag=0;
                ans.push_back(temp);
            }
            
        }
        return ans;
    }
};