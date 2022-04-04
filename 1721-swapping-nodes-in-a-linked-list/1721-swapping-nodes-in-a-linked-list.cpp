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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1=head;
        ListNode* temp2=head;
        int i=0;
        int x=0;
        ListNode* next1=head;
        while(next1!=NULL)
        {
            next1=next1->next;
            x++;
        }
        while(temp1->next!=NULL && temp1!=NULL && i!=k-1)
        {
            temp1=temp1->next;
            i++;
        }

        int j=0;
        while(temp2->next!=NULL && temp2!=NULL && j!=x-k)
        {
            temp2=temp2->next;
            j++;
        }
        swap(temp2->val,temp1->val);
        return head;
    }
};