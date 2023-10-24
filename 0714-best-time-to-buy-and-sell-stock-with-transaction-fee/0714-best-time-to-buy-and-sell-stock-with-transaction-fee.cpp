class Solution {
public:
    vector<vector<int>> dp; 
    int k;

    int find(int ind, vector<int>& v, bool buy) {
        if (ind >= v.size()) return 0;
        if (dp[ind][buy] != -1) return dp[ind][buy];
        
        if (buy) {
            dp[ind][buy] = max(-v[ind] + find(ind + 1, v, false), find(ind + 1, v, buy));
        } else {
            dp[ind][buy] = max(v[ind] + find(ind + 1, v, true)-k, find(ind + 1, v, buy));
        }
        
        return dp[ind][buy];
    }

    int maxProfit(vector<int>& prices,int fee) {
        int n = prices.size();
        dp.assign(n + 1, vector<int>(2, -1));
        k=fee;
        if (n < 2) return 0;
        return find(0, prices, true);
    }
};