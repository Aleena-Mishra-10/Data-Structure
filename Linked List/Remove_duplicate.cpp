SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

            if(head==NULL||head->next==NULL){
                return head;
            }
            SinglyLinkedListNode* t=head;
            while(t->next!=NULL){
                if(t->data==t->next->data){
                    t->next=t->next->next;
                }
                else{
                    t=t->next;
                }
            }
            return head;
}
