class Solution {
public:
    bool generate(vector<int>& nums, int n, int curr, vector<int>& dp) {
        if (curr >= n - 1) {
            return true; // Reached the end successfully.
        }
        if (!nums[curr]) {
            return false; // Cannot make any progress from here.
        }
        if (dp[curr] != -1) {
            return dp[curr];
        }

        int reach = curr + nums[curr];
        for (int i = curr + 1; i <= reach; i++) {
            if (generate(nums, n, i, dp)) {
                return dp[curr] = true; // If a valid path is found, return true.
            }
        }
        return dp[curr] = false;
    }

    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return generate(nums, n, 0, dp);
    }
};