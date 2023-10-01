class Solution {
public:
    int countPoints(string rings) {
        vector<set<int>>dp(10);
        for(int i=1;i<rings.size();i+=2){
            dp[rings[i]-'0'].insert(rings[i-1]);
        }
        int count=0;
        for(auto it:dp)
        if(it.size()==3)
        count++;
        return count;
        
    }
};