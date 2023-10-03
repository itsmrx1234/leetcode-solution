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
    vector<vector<int>>ans;
   void generate(vector<int>& temp, int level, TreeNode* root) {
        if (!root)
            return;
         if(level == ans.size()) ans.push_back(vector<int>());
        ans[level].push_back(root->val);
        generate(temp, level + 1, root->left);
        generate(temp, level + 1, root->right);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int>temp;
        generate(temp,0,root);
        return ans;
       
        
    }
};