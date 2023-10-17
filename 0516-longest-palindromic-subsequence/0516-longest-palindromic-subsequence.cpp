class Solution {
public:
int dp[1001][1001];
    int longestPalindromeSubseq(string s) {
        
        string t=s;
        reverse(t.begin(),t.end());
        int m=s.size(),n=t.size();
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }

        }
        return dp[m][n];
    }
};