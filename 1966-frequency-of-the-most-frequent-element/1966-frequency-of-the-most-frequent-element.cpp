class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long  start=0,ans=0,end=0,n=nums.size(),sum=0;
        while(end<n){
            sum+=nums[end];
            while(nums[end]*(end-start+1)>sum+k) sum-=nums[start++];
            ans=max(ans,end++-start+1);
        }
        return ans;
    }
};