class Solution {
public:
    int ans=0;
    void helper(TreeNode* node,bool left,int cnt){
        if(!node) return;
        ans=max(ans,cnt);
        if(left){
            helper(node->left,false,cnt+1);
            helper(node->right,true,1);
        }
        else{
            helper(node->right,true,cnt+1);
            helper(node->left,false,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        helper(root,true,0);
        helper(root,false,0);
        return ans;
    }
};