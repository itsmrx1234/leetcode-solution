class Solution {
public:
     Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int dp[1001][1001];
    int helper(vector<int>&nums,int target,int index){
        if(!target) return 0;
        if(index>=nums.size()||target<0) return INT_MIN;
        if(dp[index][target]!=-1) return dp[index][target];
        int a=1+helper(nums,target-nums[index],index+1);
        int b=helper(nums,target,index+1);
        return dp[index][target]=max(a,b);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
           memset(dp,-1,sizeof(dp));
           return helper(nums,target,0)<=0?-1:helper(nums,target,0);
    }
};