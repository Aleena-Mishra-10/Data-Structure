class Solution {
public:
    TreeNode* solve(TreeNode* node1, TreeNode* node2, TreeNode* target){
      if(!node1) return NULL;
      if(node1 == target && node1->val == node2->val) return node2;
      TreeNode* leftPart = solve(node1->left, node2->left, target);
      TreeNode* rightPart = solve(node1->right, node2->right, target);
      return leftPart? leftPart : rightPart;
   }
   TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned,TreeNode* target) {
      return solve(original, cloned, target);
   }
};
