class Solution {
public:
    int diff=INT_MAX;
    TreeNode* pre=nullptr;
    void helper(TreeNode* root){
        if(!root) return ;
        if(root->left) helper(root->left);
        if(pre) diff=min(diff,root->val-pre->val);
        pre=root;
        if(root->right) helper(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        helper(root);
        return diff;
    }
};