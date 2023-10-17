class Solution:
    def minimumDeleteSum(self, s1: str, s2: str) -> int:
        m, n = len(s1), len(s2)

        dp = [[0] * (n + 1) for _ in range(m + 1)]
        for i in range(1, m + 1):
            for j in range(1, n + 1):
                if s1[i - 1] == s2[j - 1]:
                    dp[i][j] = dp[i - 1][j - 1] + ord(s1[i - 1])  # Use ascii value as score
                else:
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

        totalAscii = 0
        for c in s1:
            totalAscii += ord(c)
        for c in s2:
            totalAscii += ord(c)

        return totalAscii - dp[m][n] * 2