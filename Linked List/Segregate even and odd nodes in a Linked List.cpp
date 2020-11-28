#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node* insert(Node *head,int data)
{
    Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    Node *last=head;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    while(last->next!=NULL)
      last=last->next;
    last->next=temp; 
    return head;
}
void print(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    Node *odd=NULL,*even=NULL;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        if(x%2==0)
	            even=insert(even,x);
	        else
	            odd=insert(odd,x);
	    }
	    if(!even)
	       print(odd);
	    else{
	    Node *temp=even;
	    while(temp->next)
	        temp=temp->next;
	    temp->next=odd;
	    print(even);}
	}
	return 0;
}
