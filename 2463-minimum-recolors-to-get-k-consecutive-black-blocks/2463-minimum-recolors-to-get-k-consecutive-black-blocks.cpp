class Solution {
public:
    int minimumRecolors(string nums, int k) {
        int start=0,end=0,n=nums.size(),count=0,ans=INT_MAX;
        while(end<n){
            if(nums[end]=='W')
            count++;
            if(end-start+1==k){
                ans=min(count,ans);
                if(nums[start]=='W')
                count--;
                start++;
            }
            end++;
        }
        return ans;
    }
};