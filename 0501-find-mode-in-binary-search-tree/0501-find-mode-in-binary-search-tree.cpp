class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int cnt=0,max_ans=INT_MIN;
    vector<int>ans;
    unordered_map<int,int>mp;
    void helper(TreeNode* node){
        if(!node) return ;
        helper(node->left);
        if(++mp[node->val]>max_ans){
            ans.clear();
            ans.push_back(node->val);
            max_ans=mp[node->val];
        }
        else if(mp[node->val]==max_ans) ans.push_back(node->val);
        helper(node->right);
    }
    vector<int> findMode(TreeNode* root) {
        helper(root);
        return ans;
    }
};