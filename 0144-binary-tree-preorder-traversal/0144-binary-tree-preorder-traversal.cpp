class Solution {
public:
    vector<int>ans;
    void helper(TreeNode*node){
        if(!node) return ;
        ans.push_back(node->val);
        helper(node->left);
        helper(node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        helper(root);
        return ans;
    }
};