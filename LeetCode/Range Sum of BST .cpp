class Solution {
    
      void rangeSumBSTHelper(TreeNode *root, int l, int h) {
        if (root == NULL) {
            return;
        }
        
        if (root->val >= l && root->val <= h) {
            sum += root->val;
            rangeSumBSTHelper(root->right, l, h);
            rangeSumBSTHelper(root->left, l, h);
        }
        else {
            if (root->val < l) {
                rangeSumBSTHelper(root->right, l, h);
            }

            if (root->val > h) {
                rangeSumBSTHelper(root->left, l, h);
            }
        }
    }
    
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum=0;
        rangeSumBSTHelper(root, low, high);
        return sum;
    }
   
};
