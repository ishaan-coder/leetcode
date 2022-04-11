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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        int i=0;
        int temp=-1;
        q.push(root);
        while(q.empty()==false)
        {
            int x=q.size();

            if(i%2==0)
            {
           
            while(x--)
            {
                 TreeNode*node=q.front();
                cout<<node->val<<" ";
                q.pop();
                if(node->val%2==0)
                    return false;
                if(temp!=-1)
                {
                    
                    if(temp>=node->val)
                        return false;
                    else{
                        temp=node->val;
                    }
                }
                else
                {
                    temp=node->val;
                }
                 if (node->left != NULL)
                 {
                q.push(node->left);}
            if (node->right != NULL)
                q.push(node->right);
                
            }
             }
            else
            {
                 while(x--)
            {
                TreeNode* node=q.front();
                     cout<<node->val;
                     
                     q.pop();
                if(node->val%2!=0)
                    return false;
                if(temp!=-1)
                {
                    if(temp<=node->val)
                        return false;
                    else{
                        temp=node->val;
                    }
                }
                     else
                     {
                         temp=node->val;
                     }
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            }
            }
            i++;
            cout<<endl;
            temp=-1;
        }
        return true;
    }
            
};