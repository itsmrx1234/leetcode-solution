class Solution {
public:
    unordered_map<int,int>mp;
    int f=0;
    int helper(TreeNode* node){
        if(!node) return 0;
        int l=helper(node->left);
        int r=helper(node->right);
        f=max(f,++mp[node->val+l+r]);
        return node->val+l+r;

    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        helper(root);
        vector<int>ans;
        for(auto &it:mp)
        if(it.second==f) ans.push_back(it.first);
        return ans;
    }
};