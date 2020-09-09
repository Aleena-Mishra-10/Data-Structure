int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        SinglyLinkedListNode* t1=head1;
        SinglyLinkedListNode* t2=head2;
        SinglyLinkedListNode* t3=head1;
        SinglyLinkedListNode* t4=head2;
        int n1=0;
        int n2=0;
        int i;
        while(t1->next!=NULL){
            t1=t1->next;
            n1++;
        }
        while(t2->next!=NULL){
            t2=t2->next;
            n2++;
        }
        int d;
        if(n1>n2){
            d=n1-n2;
            for (i = 0; i < d; i++) { 
            if (t3 == NULL) { 
                return -1; 
            } 
            t3=t3->next; 
            }
        }
        else{
            d=n2-n1;
            for (i = 0; i < d; i++) { 
            if (t4 == NULL) { 
                return -1; 
            } 
            t4=t4->next; 
            }
        }
       
        while(t3!=NULL&&t4!=NULL){
            if(t3==t4)
            {
                return t3->data;
            }
                t3=t3->next;
                t4=t4->next;
        }
        return -1;
}
