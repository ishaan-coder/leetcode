/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* curr=temp->next;
        swap(curr->val,temp->val);
        if(curr->next!=NULL)
        {
            temp->next=curr->next;
        }
        else
        {
            temp->next=NULL;
        }
        delete(curr);
    }
};