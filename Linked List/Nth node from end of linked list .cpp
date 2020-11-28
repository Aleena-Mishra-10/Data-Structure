int getNthFromLast(Node *head, int n)
{
      int len=0;
      Node *slow(head),*fast(head);
      Node *t(head);
      while(t){
          t=t->next;
          len++;
      }
      if(n>len){
          return -1;
      }
      while(n--){
          fast=fast->next;
      }
      while(fast){
          slow=slow->next;
          fast=fast->next;
      }
      return slow->data;
}
