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
    vector<string>ans;
    void generate(TreeNode* root,string s){
        if(!root)
        return ;
        if(!root->left&&!root->right){
            s+=to_string(root->val);
            ans.push_back(s);
            return ;
        }
        s+=to_string(root->val);
        s+="->";
        generate(root->left,s);
        generate(root->right,s);
        s.pop_back();
        s.pop_back();
        s+="->";
    }
    vector<string> binaryTreePaths(TreeNode* root) {
       string s="";
       generate(root,s);
       return ans;
    }
};