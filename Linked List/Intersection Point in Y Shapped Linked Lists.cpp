int intersectPoint(Node* head1, Node* head2)
{
    Node *temp=head1;
    while(temp){
        
        temp->data=-1*(temp->data+1);
        temp=temp->next;
    }
    int ans=-1;
    temp=head2;
    while(temp){
        if(temp->data<0){
            ans= -1*(temp->data);
            ans=ans-1;
            break;
        }
        temp=temp->next;
    }
    return ans;
}
