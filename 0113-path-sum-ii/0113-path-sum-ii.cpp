class Solution {
public:
    vector<vector<int>>ans;
    void generate(TreeNode* root,int target,vector<int>num){
        if(root==nullptr)
        return ;
        if(root->left==NULL&&root->right==NULL&&target==root->val){
            num.push_back(root->val);
            ans.push_back(num);
            return ;
        }
        num.push_back(root->val);
        generate(root->left,target-root->val,num);
        generate(root->right,target-root->val,num);
        num.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<int>num;
        generate(root,target,num);
        return ans;
    }
};