 void inOrder(Node *root) {
             stack<Node *> st;
    while(!st.empty() || root!=NULL){
        if(root!=NULL){
            st.push(root);
            root = root->left;
        }else{
            root = st.top();
            st.pop();
            cout<<root->data<<" ";
            root = root->right;
        }
    }
    }
