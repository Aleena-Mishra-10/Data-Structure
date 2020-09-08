class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
    }
    int dfs(TreeNode* head,int val){
        if(head==NULL){
            return 0;
        }
        int num=2*val+head->val;
        return head->left==head->right? num:dfs(head->left,num)+dfs(head->right,num);
    }
};
