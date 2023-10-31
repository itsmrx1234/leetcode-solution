class Solution {
public:
    vector<int> findArray(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++) ans.push_back(nums[i]^nums[i-1]);
        return ans;
    }
};