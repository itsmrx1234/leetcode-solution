class Solution {
public:
    pair<int,int>ans;
    void helper(TreeNode* node,int level){
        if(!node) return;
        if(ans.second==level) ans.first=node->val,ans.second++;
        helper(node->left,level+1),helper(node->right,level+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        helper(root,0);
        return ans.first;
    }
};