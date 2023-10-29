class Solution {
public:
    int ans=0;
    void dfs(TreeNode* node){
        if(!node) return;
        if(node->left&&!node->left->left&&!node->left->right) ans+=node->left->val;
        dfs(node->left);
        dfs(node->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return ans;
    }
};