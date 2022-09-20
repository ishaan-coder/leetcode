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
    ListNode* reverseKGroup(ListNode* head, int k) {
     ListNode *temp=head;
        vector<int>x;
        while(temp!=NULL)
        {
            x.push_back(temp->val);
            temp=temp->next;
        }
        int n=x.size();
        for(int i=0;i<n;i+=k)
        {
            int left=i;
            int right=i+k-1;
            if(right>n-1)
                break;
            while(left<right)
            {
                swap(x[left++],x[right--]);
            }
        }
    
        ListNode* temp1=new ListNode();
        head=temp1;
        for(int i=0;i<n;i++)
        {
            cout<<x[i]<<" ";
            ListNode* curr=new ListNode(x[i]);
            temp1->next=curr;
            temp1=curr;
        }
        return head->next;
    }
};