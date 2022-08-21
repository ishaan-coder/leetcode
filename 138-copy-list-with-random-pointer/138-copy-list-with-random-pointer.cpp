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
    map<Node*,Node*>mp;
        Node* x=head;
        while(x!=NULL)
        {
            mp[x]=new Node(x->val);
            x=x->next;
            
        }
        x=head;
        while(x!=NULL)
        {
            mp[x]->next=mp[x->next];
            mp[x]->random=mp[x->random];
            x=x->next;
        }
        return mp[head];
    }
};