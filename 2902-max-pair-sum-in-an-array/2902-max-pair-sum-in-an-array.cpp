class Solution {
public:
    int maxdigit(int n){
         int max_digit = 0;
        while (n > 0) {
            int digit = n % 10;
            max_digit = max(max_digit, digit);
            n /= 10;
        }
        return max_digit;
    }
    int maxSum(vector<int>& nums) {
        int n=nums.size(),ans=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(maxdigit(nums[i])==maxdigit(nums[j]))
                ans=max(ans,nums[i]+nums[j]);
            }
        }
        return ans==INT_MIN?-1:ans;
    }
};