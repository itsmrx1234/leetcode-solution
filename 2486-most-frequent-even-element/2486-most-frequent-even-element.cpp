class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        if(nums.size()<2)
        return nums[0]&1?-1:nums[0];
        unordered_map<int,int>mp;
        for(auto it:nums)
        if(!(it&1))
        mp[it]++;
        if(!mp.size())
        return -1;
        int cnt=INT_MIN,ans=INT_MAX,f=0;
        for(auto it:mp){
            if(cnt==it.second){
                ans=min(it.first,ans);
            }
            else if(cnt<it.second){
                ans=it.first;
                cnt=it.second;
            }

        }
        return ans;
    }
};