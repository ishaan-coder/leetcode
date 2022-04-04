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
        while(k>1)
        {
            temp1=temp1->next;
            k--;
        }
        next1=temp1;
        temp1=temp1->next;
        
        while(temp1)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        swap(temp2->val,next1->val);
        return head;
    }
};