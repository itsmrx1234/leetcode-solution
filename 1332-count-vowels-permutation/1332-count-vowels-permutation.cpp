class Solution {
    int mod = 1000000007;
public:
    int countVowelPermutation(int n) {
        int dp[n][5];
        for (int i = 0; i < 5 ; i++) {
            dp[0][i] = 1;
        }
        for (int i = 0; i < n-1; i++) {
            dp[i + 1][0] = ((dp[i][1] + dp[i][2]) % mod + dp[i][4]) % mod;
            dp[i + 1][1] = (dp[i][0] + dp[i][2]) % mod;
            dp[i + 1][2] = (dp[i][1] + dp[i][3]) % mod;
            dp[i + 1][3] = dp[i][2];
            dp[i + 1][4] = (dp[i][2] + dp[i][3]) % mod;
        }
        int ans = 0;
        for (int i = 0; i < 5; i++) {
            ans = (ans + dp[n - 1][i]) % mod;
        }
        return ans;
    }
};