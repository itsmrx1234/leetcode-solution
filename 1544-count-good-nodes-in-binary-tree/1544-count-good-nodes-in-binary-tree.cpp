class Solution {
public:
    int ans=0;
    void helper(TreeNode* node, int max_val){
        if(!node) return;
        if(max_val<=node->val) max_val=node->val,ans++;
        helper(node->left,max_val);
        helper(node->right,max_val);
    }
    int goodNodes(TreeNode* root) {
        helper(root,root->val);
        return ans;
    }
};