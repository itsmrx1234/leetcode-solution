class Solution {
public:
    bool generate(vector<int>& nums, int n, int curr, vector<int>& dp) {
         if (curr >= n) {
            return false; // Went beyond the array's bounds.
        }
        if (curr == n - 1)
            return true;
        if (!nums[curr])
            return false;
        if (dp[curr] != -1)
            return dp[curr];
        int reach = curr + nums[curr];
        for (int i = curr + 1; i <= reach; i++) {
            if (generate(nums, n, i, dp))
                return dp[curr] = true;
        }
        return dp[curr] = false;
    }

    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return generate(nums, nums.size(), 0, dp);
    }
};