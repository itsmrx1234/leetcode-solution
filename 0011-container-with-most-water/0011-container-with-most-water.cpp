class Solution {
public:
    int maxArea(vector<int>& nums) {
        int low=0,high=nums.size()-1,ans=0;
        while(low<high){
            int widht=high-low;
            int h=min(nums[low],nums[high]);
            ans=max(ans,h*widht);
            if(nums[low]<nums[high]) low++;
            else high--;
        }
        return ans;
        
    }
};