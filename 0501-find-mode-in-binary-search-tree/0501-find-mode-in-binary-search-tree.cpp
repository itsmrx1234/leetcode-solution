class Solution {
public:
    unordered_map<int,int> mp;
    vector<int>res;
    int ans=INT_MIN;
    void helper(TreeNode* node){
        if(!node) return ;
        helper(node->left);
        if(++mp[node->val]>ans){
            res.clear();
            res.push_back(node->val);
            ans=mp[node->val];
        }
        else if(mp[node->val]==ans) res.push_back(node->val);
        helper(node->right);
    }
    vector<int> findMode(TreeNode* root) {
        helper(root);
        return res;
    }
};