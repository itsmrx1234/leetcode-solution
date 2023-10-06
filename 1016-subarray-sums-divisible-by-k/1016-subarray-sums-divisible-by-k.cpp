class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        long long sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
             int rem = (sum % k + k) % k;
            if(mp.find(rem)!=mp.end())
            count+=mp[rem];
            mp[rem]++;
        }       
        return count;
    }
};