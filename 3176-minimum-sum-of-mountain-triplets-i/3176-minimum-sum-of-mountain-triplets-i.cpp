class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size(),ans = INT_MAX;
        vector<int>prefix(n,1e7),postfix(n,1e8);
        prefix[0]=nums[0];
        postfix[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=min(prefix[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
              postfix[i] = min(postfix[i + 1], nums[i]);
        }
        for(int i=1;i<n-1;i++){
            if (prefix[i - 1] < nums[i] && postfix[i + 1] < nums[i])
            ans=min(ans,nums[i]+prefix[i-1]+postfix[i+1]);
        }
        return ans==INT_MAX?-1:ans;
    }
};