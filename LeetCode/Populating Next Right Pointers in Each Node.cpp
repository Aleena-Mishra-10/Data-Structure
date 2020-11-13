class Solution {
public:
    Node* connect(Node* root) {
        if(root and root->left){
            root->left->next=root->right;
            auto c1=root->left , c2=root->right;
            while(c1->right){
                c1->right->next=c2->left,c1=c1->right,c2=c2->left;
            }
            root->left=connect(root->left), root->right=connect(root->right);
        }
        return root;
    }
};
