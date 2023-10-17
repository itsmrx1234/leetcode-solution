class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int start=0,end=0,n=nums.size();
        long long sum=0,res=INT_MIN;
        unordered_map<int,int>mp;
        while(end<n){
            sum+=nums[end];
            mp[nums[end]]++;
            while(mp.size()!=end-start+1){
                if(mp[nums[start]]==1)
                 mp.erase(nums[start]);
                else
                 mp[nums[start]]--;
                sum-=nums[start++];
            }
        while(mp.size()>k){
            if(mp[nums[start]]==1)
                 mp.erase(nums[start]);
                else
                 mp[nums[start]]--;
                sum-=nums[start++];
        }
        if(mp.size()==k)
        res=max(res,sum);
        end++;
    }
    return res==INT_MIN?0:res;
    }
};