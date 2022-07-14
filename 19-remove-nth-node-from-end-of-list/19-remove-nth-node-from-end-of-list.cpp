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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        if(head==NULL||head->next==NULL)
            return NULL;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
         count=count-n;
        if(count==0)
            return head->next;
        int x=0;
        ListNode *prev=NULL;
        while(temp!=NULL)
        {
            if(x!=count){
            prev=temp;
            temp=temp->next;
            x++;}
            else
            {
                prev->next=temp->next;
                delete(temp);
                break;
            }
        }
        return head;
    }
};