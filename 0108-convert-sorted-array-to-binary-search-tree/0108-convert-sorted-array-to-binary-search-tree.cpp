class Solution {
public:
   TreeNode* helper(vector<int>&nums,int l,int r){
       int m=l+(r-l)/2;
       if(l>r) return nullptr;
       TreeNode* node = new TreeNode(nums[m]);
       node->left=helper(nums,l,m-1);
       node->right=helper(nums,m+1,r);
       return node;
       
   }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};