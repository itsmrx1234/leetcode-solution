class Solution {
public:
    TreeNode* ans=nullptr;
    TreeNode *tar;
    void helper(TreeNode* node){
        if(!node) return;
        if(node->val==tar->val){ 
            ans=node;
            return;
        }
        helper(node->left),helper(node->right);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        tar=target;
        helper(cloned);
        return ans;
    }
};