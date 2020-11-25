bool isCircular(Node *head)
{
  if(head==NULL){
      return true;
  }
  struct Node *temp=head;
  while(temp->next!=NULL&&temp->next!=head){
      temp=temp->next;
  }
  if(temp->next==NULL){
      return false;
  }
  else{
      return true;
  }
}
