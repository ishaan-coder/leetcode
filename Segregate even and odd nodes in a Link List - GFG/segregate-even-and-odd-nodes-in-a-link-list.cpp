// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        Node* even=NULL;
        Node* tail=NULL;
        Node* odd=NULL;
        Node* tail2=NULL;
        
        Node* temp=head;
        while(temp!=NULL)
        {
           if(temp->data%2==0)
           {
              if(even==NULL)
              {
                  Node *curr=new Node(temp->data);
                  even=curr;
                  tail=curr;
              }
              else
              {
                  Node *curr=new Node(temp->data);
                  tail->next=curr;
                  tail=curr;
              }
           }
           temp=temp->next;
        }
        temp=head;
         while(temp!=NULL)
        {
           if(temp->data%2!=0)
           {
              if(odd==NULL)
              {
                  Node *curr=new Node(temp->data);
                  odd=curr;
                  tail2=curr;
              }
              else
              {
                  Node *curr=new Node(temp->data);
                    tail2->next=curr;
                  tail2=curr;
              }
           }
           temp=temp->next;
        }
        temp=head;
        while(even!=NULL)
        {
            temp->data=even->data;
            even=even->next;
            temp=temp->next;
        }
        while(odd!=NULL)
        {
            temp->data=odd->data;
            odd=odd->next;
            temp=temp->next;
        }
        return head;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends