class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        int low=INT_MAX,mid=INT_MAX;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>mid) return true;
            else if(low<nums[i]&&nums[i]<mid)
                mid=nums[i];
            else if(low>nums[i])
                low=nums[i];
        }
        return false;
    }
};