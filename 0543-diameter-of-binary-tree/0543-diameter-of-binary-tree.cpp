class Solution {
public:
    int ans=0;
    int  helper(TreeNode* node){
        if(!node) return 0;
        int l=helper(node->left);
        int r=helper(node->right);
        ans=max(ans,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return ans;
    }
};