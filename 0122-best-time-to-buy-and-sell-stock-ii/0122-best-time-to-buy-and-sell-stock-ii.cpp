class Solution {
public:
    vector<vector<int>> dp; // Define the 2D DP array, but its size should be determined within the constructor.


    int find(int ind, vector<int>& v, bool buy) {
        if (ind >= v.size()) return 0;
        if (dp[ind][buy] != -1) return dp[ind][buy];
        
        if (buy) {
            // If you are buying, subtract the stock price and change the flag to selling (not !buy, but false).
            dp[ind][buy] = max(-v[ind] + find(ind + 1, v, false), find(ind + 1, v, buy));
        } else {
            // If you are selling, add the stock price and change the flag to buying (not !buy, but true).
            dp[ind][buy] = max(v[ind] + find(ind + 1, v, true), find(ind + 1, v, buy));
        }
        
        return dp[ind][buy];
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // Initialize the DP array with appropriate dimensions (n+1) x 2, all set to -1.
        dp.assign(n + 1, vector<int>(2, -1));

        if (n < 2) return 0;
        return find(0, prices, true); // Start buying at the first day (true).
    }
};