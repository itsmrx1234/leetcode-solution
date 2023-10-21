class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=-1e9,cost=1e9;
        for(auto it:prices){
            cost=min(it,cost);
            profit=max(profit,it-cost);
        }
        return profit;
    }
};