class Solution {
public:
    int coinChange(vector<int>& S, int sum) {
        int n = S.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, INT_MAX - 1));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (S[i - 1] <= j) {
                    dp[i][j] = min(dp[i][j - S[i - 1]] + 1, dp[i - 1][j]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return (dp[n][sum] == INT_MAX - 1) ? -1 : dp[n][sum];
    }
};