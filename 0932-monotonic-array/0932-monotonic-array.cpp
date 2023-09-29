class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool f=1,t=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1]&&f)
            t=false;
            else if(nums[i]>nums[i+1]&&t)
            f=false;
            else if(nums[i]!=nums[i+1])
            return false;
        }
        return true;
        
    }
};