/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void rotate(vector<int>&x)
    {
         int n=x.size();
        int temp=x[n-1];
       for(int i=n-1;i>0;i--)
       {
           x[i]=x[i-1];
       }
        x[0]=temp;
    
    }
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>x;
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            x.push_back(curr->val);
            curr=curr->next;
        }
        int n=x.size();
        if(k>=n)
            k=k%n;
        for(int i=0;i<k;i++)
        {
            rotate(x);
        }
        curr=head;
        int i=0;
        while(curr!=NULL)
        {
            curr->val=x[i++];
            curr=curr->next;
        }
        return head;
    }
};