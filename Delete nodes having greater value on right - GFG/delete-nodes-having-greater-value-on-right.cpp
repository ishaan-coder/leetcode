// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    Node* reverse(Node *head)
    {
        Node *temp=head;
        Node* prev=NULL;
        while(temp!=NULL)
        {
            Node *curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        head=reverse(head);
        Node *temp=head;
        int max1=0;
        Node *x=NULL;
        Node *head2=NULL;
        while(temp!=NULL)
        {
            if(temp->data>=max1)
            {
      
                max1=max(temp->data,max1);
                Node*curr=new Node(temp->data);
                if(x==NULL)
                {
                    x=curr;
                    head2=curr;
                }
                else
                {
                    x->next=curr;
                    x=curr;
                }
            }
            temp=temp->next;
        }
        head=reverse(head2);
        return head;
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends