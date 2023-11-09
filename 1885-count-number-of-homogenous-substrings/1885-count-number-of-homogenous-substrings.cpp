class Solution {
public:
    int countHomogenous(string nums) {
        unordered_map<char,int>mp;
        long long  start=0,end=0,n=nums.size(),ans=0,mod= 1e9+7;
        while(end<n){
            mp[nums[end]]++;
            while(mp.size()>1){
                if(mp[nums[start]]==1) mp.erase(nums[start]);
                else mp[nums[start]]--;
                start++;
            }
            ans+=end-start+1;
            end++;
        }
        return ans%mod;
    }
};