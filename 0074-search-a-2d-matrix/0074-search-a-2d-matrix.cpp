class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int low=0,high=nums.size()*nums[0].size()-1,k=nums[0].size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid/k][mid%k]==target)
            return true;
            else if(nums[mid/k][mid%k]<target)
            low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};