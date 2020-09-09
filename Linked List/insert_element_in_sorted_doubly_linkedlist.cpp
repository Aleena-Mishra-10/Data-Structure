DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

        DoublyLinkedListNode* t;
        DoublyLinkedListNode* new_node = (DoublyLinkedListNode* )malloc(sizeof(DoublyLinkedListNode*));
        new_node->data=data;
        new_node->prev=NULL;
        new_node->next=NULL;
       if(head==NULL){
           head=new_node;
       }
       else if((head->data)>=new_node->data)
       {
           new_node->next=head;
           new_node->next->prev=new_node;
           head=new_node;
       }
       else{
            t=head;
                while(t->next!=NULL&&t->next->data<data){
                             t=t->next; 
                }
                new_node->next=t->next;
                if(t->next!=NULL){
                    new_node->next->prev=new_node;
                }
                t->next=new_node;
                new_node->prev=t;
             
       }

        
        return head;
}
