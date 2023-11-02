class Solution {
public:
    int ans=0;
    int sum(TreeNode* node,int& cnt){
        if(!node) return 0;
        ++cnt;
        return node->val+sum(node->left,cnt)+sum(node->right,cnt);
    }
    void helper(TreeNode* node){
        if(!node) return ;
        int cnt=0,avg=sum(node,cnt)/cnt;
        ans+=(avg==node->val);
        helper(node->left),helper(node->right);
    }
    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
};