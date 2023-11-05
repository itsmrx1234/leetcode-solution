class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0,end=0,n=nums.size(),ans=INT_MIN,cnt=0;
        while(end<n){
            cnt+=(1-nums[end]);
            while(cnt>1){
                cnt-=1-(nums[start++]);
            }
            ans=max(ans,end++-start+1);
        }
        return ans-1;
        
    }
};