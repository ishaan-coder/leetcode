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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* temp=root;
        vector<int>ans;
        while(!st.empty()||temp!=NULL)
        {
            if(temp!=NULL)
            {
                st.push(temp);
                temp=temp->left;
            }
            else
            {
                TreeNode* temp1=st.top()->right;
                if(temp1==NULL)
                {
                    temp1=st.top();
                    st.pop();
                    ans.push_back(temp1->val);
                    while(!st.empty() && temp1==st.top()->right)
                    {
                        temp1=st.top();
                        st.pop();
                        ans.push_back(temp1->val);
                    }
                }
                
                else
                {
                    temp=temp1;
                }
            }
        }
        return ans;
    }
};