class Solution {
public:
    int heightChecker(vector<int>& heights) {
        map<int,int>mp;
        for(auto it:heights)
        mp[it]++;
        int ans=0;
        int curr=1;
        for(int i=0;i<heights.size();i++){
            while (mp[curr] == 0) {
                curr++;
            }
        if(curr!=heights[i])
         ans++;
        mp[curr]--;    
        }
        return ans;
        
    }
};