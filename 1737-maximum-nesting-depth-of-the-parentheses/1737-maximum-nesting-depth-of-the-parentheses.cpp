class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,ans=INT_MIN;
        for(auto it:s){
            if(it=='('){
             cnt++;
             ans=max(cnt,ans);
            }
            else if(it==')')
             cnt--;
        }
        return ans==INT_MIN?0:ans;
    }
};