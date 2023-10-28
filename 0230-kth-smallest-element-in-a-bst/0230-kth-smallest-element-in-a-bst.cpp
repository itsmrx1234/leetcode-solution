class Solution {
public:
    int ans;
    void helper(TreeNode* node,int &k){
        if(!node) return ;
        helper(node->left,k);
        if(--k==0) ans=node->val;
        helper(node->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        return ans;
    }
};