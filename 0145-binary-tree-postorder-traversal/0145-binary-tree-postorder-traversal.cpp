
class Solution {
public:
    vector<int>ans;
    void helper(TreeNode*node){
        if(!node) return ;
        helper(node->left);
        helper(node->right);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
      helper(root);
      return ans;
    }
};