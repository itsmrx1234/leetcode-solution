class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int,int>mp;
        int start=0,end=0,n=nums.size(),count=0,ans=INT_MIN;
        while(end<n){
            mp[nums[end]]++;
            while(mp.size()>2){
                if(mp[nums[start]]==1)
                 mp.erase(nums[start]);
                else 
                 mp[nums[start]]--;
                 start++;
            }
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;
    }
};