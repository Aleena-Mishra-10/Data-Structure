multiset<int> ans;
    void traverse(ListNode* node)
    {
        while(node)
        {
            ans.insert(node->val);
            node=node->next;
        }
    }
    
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL&&l2==NULL)
            return nullptr;
        if(l1==NULL&&l2)
            return l2;
        if(l1&&l2==NULL)
            return l1;
        traverse(l1);
        traverse(l2);
        multiset<int>::iterator it=ans.begin();
        
        cout<<*it;
        
        ListNode* start=new ListNode(*it);
        it++;
        ListNode* result=start;
        while(it!=ans.end())
        {
            start->next=new ListNode(*it);
            start=start->next;
            it++;
            
        }
        return result;
    }
