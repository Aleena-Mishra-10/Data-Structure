DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

        if(head==NULL||head->next==NULL){
            return head;
        }
        DoublyLinkedListNode* cur=head;
        DoublyLinkedListNode* temp;
        while(cur!=NULL){
               temp=cur->prev;
               cur->prev=cur->next;
               cur->next=temp;
               cur=cur->prev;

        }
        if(temp!=NULL){
            temp=temp->prev;
        }

        head=temp;
        return head;
}
