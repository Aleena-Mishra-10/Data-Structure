class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ulong lastaddr = 0;
        ListNode *t = head;
        while(t!=NULL){
            ulong addr = (ulong)t;
            if(addr<=lastaddr){
                return t;
            }
            lastaddr=addr;
            t=t->next;
        }
        return NULL;
    }
};
