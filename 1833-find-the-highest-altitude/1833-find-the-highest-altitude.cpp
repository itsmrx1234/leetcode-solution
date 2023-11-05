class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        int ans=max(0,nums[0]);
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
            ans=max(ans,nums[i]);
        }
        return ans;
    }
};