class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int k =unordered_set<int>(nums.begin(), nums.end()).size();
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>& nums,int k)
    {
        int start = 0;
int end = 0,n = nums.size(),count = 0;
        unordered_map<int,int>mp;
        while(end<n){
            mp[nums[end]]++;
            while(mp.size()>k){
                if(mp[nums[start]]==1)
                  mp.erase(nums[start]);
                else
                  mp[nums[start]]--;
                  start++;
            }
            count+=end-start+1;
            end++;
        }
        return count;
        
    }
};