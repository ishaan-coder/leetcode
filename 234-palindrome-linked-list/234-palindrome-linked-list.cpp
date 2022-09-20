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
    ListNode* reverse(ListNode* curr)
    {
        ListNode* prev=NULL;
 
        while(curr!=NULL)
        {
            ListNode* x=curr->next;
            curr->next=prev;
            prev=curr;
            curr=x;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
          if(head==NULL||head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
               slow->next=reverse(slow->next);
                slow=slow->next;
                ListNode* temp=head;
        while(slow!=NULL)
        {
            if(slow->val!=temp->val)
                return false;
            slow=slow->next;
            temp=temp->next;
        }
        return true;
    }
};