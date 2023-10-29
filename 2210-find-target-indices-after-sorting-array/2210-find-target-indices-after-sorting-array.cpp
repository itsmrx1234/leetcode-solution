class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(start>=nums.size() or nums[start]!=target) return {};
        int end=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        vector<int>ans;
        for(int i=start;i<end;i++) ans.push_back(i);
        return ans;

        
    }
};