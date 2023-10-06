class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int diff=0,maxlen=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            diff-=1;
            else 
            diff+=1;
            if(mp.find(diff)!=mp.end())
            maxlen=max(i-mp[diff],maxlen);
            else
            mp[diff]=i;
        }
        if(maxlen==INT_MIN)
        return 0;
        return maxlen;
        
    }
};