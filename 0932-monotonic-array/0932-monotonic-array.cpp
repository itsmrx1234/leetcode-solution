class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int f=1,t=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1]&&f)
            t=0;
            else if(nums[i]>nums[i+1]&&t)
            f=0;
            else if(nums[i]!=nums[i+1])
            return false;
        }
        return true;
        
    }
};