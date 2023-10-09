class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int start=0,end=0,n=nums.size(),ans=INT_MIN,sum=0;
        while(end<n){
            mp[nums[end]]++;
            sum+=nums[end];
            while(mp[nums[end]]>1){
                sum-=nums[start];
                   mp[nums[start++]]--;
            }
            ans=max(sum,ans);
            end++;
        }
        return ans;
        
    }
};