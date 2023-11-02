class Solution {
public:
    int sum=0;
    void helper(TreeNode* node){
        if(!node) return;
        helper(node->right);
        sum=node->val+=sum;
        helper(node->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        helper(root);
        return root;
    }
};