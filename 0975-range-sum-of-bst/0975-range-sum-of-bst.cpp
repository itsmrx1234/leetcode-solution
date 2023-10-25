class Solution {
public:
    int sum=0;
    void helper(TreeNode* root,int low,int high){
        if(root){
            if(root->val>=low&&root->val<=high) sum+=root->val;
        }
        else return;
        helper(root->left,low,high);
        helper(root->right,low,high);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        helper(root,low,high);
        return sum;
    }
};