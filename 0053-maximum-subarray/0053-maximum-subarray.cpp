class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int start = 0, end = 0, n = nums.size();
        long long sum = 0, ans = -1e18;
     while (end < n) {
      sum += nums[end];
      while (sum<nums[end]) {
         sum -= nums[start];
         start++;
      }  
      ans = max(ans, sum);
      end++;
    }
     return ans;
    }
};