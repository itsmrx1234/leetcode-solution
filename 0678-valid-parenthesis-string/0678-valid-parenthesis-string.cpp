class Solution {
public:
    int dp[101][101];
    bool checkValidString(string s) {
        int n=s.size();
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(s[i-1]=='*'){
                      dp[i][j] = dp[i - 1][j] || (j > 0 && dp[i - 1][j - 1]) || (j < n && dp[i - 1][j + 1]);
                }
                else{
                     if (s[i - 1] == '(') {
                        dp[i][j] = (j > 0) ? dp[i - 1][j - 1] : false;
                    } else {
                        dp[i][j] = (j < n) ? dp[i - 1][j + 1] : false;
                    }
                }
            }
        }
        return dp[n][0];
    }
};