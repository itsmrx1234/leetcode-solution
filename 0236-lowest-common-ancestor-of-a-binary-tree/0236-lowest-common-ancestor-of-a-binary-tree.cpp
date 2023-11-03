class Solution {
public:
    TreeNode* helper(TreeNode* node,TreeNode* p,TreeNode* q){
        if(!node||node==p||node==q) return node;
        TreeNode* l=helper(node->left,p,q);
        TreeNode* r=helper(node->right,p,q);
        if(l&&r) return node;
        else if(l) return l;
        else return r;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root,p,q);\
    }
};