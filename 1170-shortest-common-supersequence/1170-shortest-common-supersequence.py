class Solution:
    def shortestCommonSupersequence(self, str1: str, str2: str) -> str:
        def lcs(s, t):
            n, m = len(s), len(t)
            dp = [["" for _ in range(m + 1)] for _ in range(n + 1)]
            for i in range(1, n + 1):
                for j in range(1, m + 1):
                    if s[i - 1] == t[j - 1]:
                        dp[i][j] = dp[i - 1][j - 1] + s[i - 1]
                    else:
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1], key=len)
            return dp[n][m]

        res, i, j = "", 0, 0
        lcs_result = lcs(str1, str2)
        for c in lcs_result:
            while str1[i] != c:
                res += str1[i]
                i += 1
            while str2[j] != c:
                res += str2[j]
                j += 1
            res += c
            i, j = i + 1, j + 1
        return res + str1[i:] + str2[j:]