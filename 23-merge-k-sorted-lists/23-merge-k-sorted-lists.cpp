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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=new ListNode(0);
        ListNode *x=head;
        map<int,int>mp;
        for(int i=0;i<lists.size();i++)
        {
            auto node=lists[i];
            while(node!=NULL)
            {
                int temp=node->val;
                mp[temp]++;
                node=node->next;
            }
            
        }
        for(auto u:mp)
        {
            while(u.second>0)
            {
                ListNode *temp=new ListNode(u.first);
              
                
                x->next=temp;
                x=x->next;
                u.second--;
            }
        }
        x->next=NULL;
        return head->next;
        
    }
};