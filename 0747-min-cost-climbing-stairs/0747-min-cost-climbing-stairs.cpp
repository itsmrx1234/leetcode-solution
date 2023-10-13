class Solution {
public:
    int minCostClimbingStairs(vector<int>&v) {
     int dp[v.size()];
     dp[0]=v[0];
     dp[1]=v[1];
     for(int i=2;i<v.size();i++){
        dp[i]=v[i]+min(dp[i-1],dp[i-2]);
     }        
     return min(dp[v.size()-1],dp[v.size()-2]);
    }
};