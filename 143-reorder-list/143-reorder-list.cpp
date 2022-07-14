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
    void reorderList(ListNode* head) {
    stack<ListNode*>st;
         if ((!head) || (!head->next) || (!head->next->next)) return; // Edge cases
        ListNode *temp=head;
        int x=0;
        while(temp!=NULL)
        {
            x++;
            st.push(temp);
            temp=temp->next;
        }
        temp=head;
        for(int j=0;j<x/2;j++)
        {
            ListNode *curr=st.top();
            st.pop();
            curr->next=temp->next;
            temp->next=curr;
            temp=temp->next->next;
        }
        temp->next=NULL;
        
        
        
    }
};