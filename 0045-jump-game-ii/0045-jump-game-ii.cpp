class Solution {
public:
    long long generate(vector<int>& nums, int n, int curr, vector<int>& dp) {
        if (curr == n)
            return 0;
        if (dp[curr] != -1)
            return dp[curr];
        long long temp = INT_MAX;
        for (int i = 1; i <= nums[curr]; i++) {
            if (i + curr > n)
                break;
            temp = min(temp, 1 + generate(nums, n, curr + i, dp));
        }
        dp[curr] = temp;
        return dp[curr];
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return generate(nums, nums.size() - 1, 0, dp);
    }
};