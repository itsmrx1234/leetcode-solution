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
    vector<int>ans;
    void generate(TreeNode* root){
        if(!root){
            return ;
        }
         generate(root->left);
         ans.push_back(root->val);
         generate(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        generate(root);
        return ans;
        
    }
};