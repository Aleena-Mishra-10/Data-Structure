Node* segregate(Node *head) {
    
   int cnt[3] = {};
   for(Node *i=head;i!=NULL;i=i->next){
       cnt[i->data]++;
   }
   Node *x = head;
   for(int i=0;i<3;i++){
       while(cnt[i]--){
           x->data=i;
           x=x->next;
       }
   }
   return head;
    
}
