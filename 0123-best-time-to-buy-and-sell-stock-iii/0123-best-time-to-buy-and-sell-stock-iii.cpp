class Solution {
public:
    int find(int ind,bool buy,int c,vector<int>&v,vector<vector<vector<int>>>&memo){
        if(ind>=v.size()||c>=2) return 0;
        if(memo[ind][buy][c]!=-1) return memo[ind][buy][c];
        if(buy) return memo[ind][buy][c] = max(-v[ind]+find(ind+1,!buy,c,v,memo), find(ind+1,buy,c,v,memo));
        else return memo[ind][buy][c]=max(v[ind]+find(ind+1,!buy,c+1,v,memo), find(ind+1,buy,c,v,memo));
    }
    int maxProfit(vector<int>& prices) {
         vector<vector<vector<int>>> memo(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
         return find(0,true,0,prices,memo);
    }
};