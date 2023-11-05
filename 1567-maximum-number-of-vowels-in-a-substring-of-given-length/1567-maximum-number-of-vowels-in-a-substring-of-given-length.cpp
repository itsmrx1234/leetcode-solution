class Solution {
public:
    int maxVowels(string nums, int k) {
        int start=0,end=0,n=nums.size(),cnt=0,ans=0;
        while(end<n){
            if(nums[end]=='a'|| nums[end]=='e'||nums[end]=='i'||nums[end]=='o'||nums[end]=='u')
            cnt++;
            if(end-start+1>k){
                if(nums[start]=='a'|| nums[start]=='e'||nums[start]=='i'||nums[start]=='o'||nums[start]=='u')
                    cnt--;start++;
            }
            if(end-start+1==k)
            ans=max(ans,cnt);
            end++;
        }
        return ans;
    }
};