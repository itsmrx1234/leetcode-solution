/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode* root){
       if(root==NULL)
       return 0;
       int a=depth(root->left);
       int b=depth(root->right);
       return max(a,b)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
        return true;
        int left=depth(root->left);
        int right=depth(root->right);
       return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};