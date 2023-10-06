class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        long long sum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = (k == 0) ? sum : sum % k;
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>=2)
                return true;
            }
            else
            mp[rem]=i;
        }
        return false;
    }
};