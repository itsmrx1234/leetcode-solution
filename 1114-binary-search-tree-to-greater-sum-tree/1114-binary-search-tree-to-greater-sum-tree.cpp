class Solution {
public:
    int sum=0;
    void helper(TreeNode* node){
        if(!node) return ;
        helper(node->right);
        node->val+=sum;
        sum=node->val;
        helper(node->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        helper(root);
        return root;
    }
};