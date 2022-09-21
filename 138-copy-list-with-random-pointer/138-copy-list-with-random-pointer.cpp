/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* front=head;
        Node* curr=head;
        while(curr!=NULL)
        {
            front=curr->next;
            Node* copy=new Node(curr->val);
            curr->next=copy;
            copy->next=front;
            curr=front;
        }
        curr=head;
        while(curr!=NULL)
        {
            if(curr->random!=NULL)
            {
            curr->next->random=curr->random->next;
            }
             curr=curr->next->next;
            
        }
        curr=head;
        Node* dummy=new Node(0);
        Node* copy=dummy;
        while(curr!=NULL)
        {
            front=curr->next->next;
            copy->next=curr->next;
            curr->next=front;
            copy=copy->next;
            curr=curr->next;
        }
        return dummy->next;

        }
};