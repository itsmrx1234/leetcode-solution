class Solution {
public:
    bool searchMatrix(vector<vector<int>>&nums, int target) {
        int  row=0,col=nums[0].size()-1;
        while(row<nums.size() &&col>=0){
          if(nums[row][col]==target)return true;
          if(nums[row][col]<target) row++;
          else col--;
        }
        return false;
    }
};