class Solution {
public:
    int atmost(vector<int>&nums,int k){
        int start=0,end=0,n=nums.size(),count=0,ans=0;
        while(end<n){
           if(nums[end]%2)
            count++;
            while(count>k&&start<n){
                  if(nums[start]%2)
                  count--;
                 start++;
            }
            ans+=end-start+1;
            end++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};