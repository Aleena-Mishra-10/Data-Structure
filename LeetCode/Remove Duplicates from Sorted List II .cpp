class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *p=new ListNode(0);
        p->next=head;
        ListNode *t=p;
        while(t->next!=NULL && t->next->next!=NULL){
            if(t->next->val==t->next->next->val){
                int dup=t->next->val;
                while(t->next!=NULL && t->next->val==dup){
                t->next=t->next->next;
                }
            }
            else{
                t=t->next;
            }
        }
        return p->next;
    }
};
