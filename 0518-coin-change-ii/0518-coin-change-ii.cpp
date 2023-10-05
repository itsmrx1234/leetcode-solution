class Solution {
public:
    int change(int amount, vector<int>& v) {
         vector<int> dp(amount + 1,0);
    dp[0] = 1;
 
   for (int j = 0; j < v.size(); j++) {
         for (int i = 1; i <= amount; i++) {
            if (i - v[j] >= 0 ) {
                dp[i] =(dp[i]+dp[i-v[j]]);
            }
        }
    }
 
   return dp[amount];

    }
};