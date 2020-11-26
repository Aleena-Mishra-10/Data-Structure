Node* findIntersection(Node* head1, Node* head2)
{
    if(head1==NULL&&head2==NULL){
        return head1;
    }
    Node *a=head1;
    Node *b=head2;
    Node *list=new Node(-1);
    Node *head=list;
    while(a!=NULL&&b!=NULL){
        if(a->data==b->data){
            list->next=new Node(a->data);
            a=a->next;
            b-b->next;
            list=list->next;
        }
        else if(a->data<b->data){
            a=a->next;
        }
        else{
            b=b->next;
        }
    }
    return head->next;
}
