class Solution {
public:
    int equalSubstring(string s, string t, int k) {
        int start=0,end=0,n=s.size(),ans=INT_MIN,sum=0;
        while(end<n){
            sum+=abs(s[end]-t[end]);
            while(sum>k){
                sum-=abs(s[start]-t[start]);
                start++;
            }
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;
    }
};