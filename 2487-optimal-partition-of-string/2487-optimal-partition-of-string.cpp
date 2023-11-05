class Solution {
public:
    int partitionString(string &nums) {
        unordered_map<char,int>mp;
        int start=0,end=0,n=nums.size(),cnt=0;
        while(end<n){
            mp[nums[end]]++;
            if(mp[nums[end]]>1){
                cnt++;
                for(;start<end;start++) mp[nums[start]]--;
            }
            end++;
        }
        return cnt+1;
    }
};