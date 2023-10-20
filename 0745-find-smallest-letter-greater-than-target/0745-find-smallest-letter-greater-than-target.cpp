class Solution {
public:
    char nextGreatestLetter(vector<char>& nums, char target) {
       return nums[(upper_bound(nums.begin(),nums.end(),target)-nums.begin())%nums.size()];
    }
};