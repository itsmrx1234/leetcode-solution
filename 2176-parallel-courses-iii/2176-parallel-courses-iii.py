class Solution:
    def minimumTime(self, n, R, T):
        G = defaultdict(list)
        for x, y in R: G[y] += [x]
        dp = cache(lambda x:T[x - 1] + max([dp(c) for c in G[x]] + [0]))
        return max(dp(i+1) for i in range(n))