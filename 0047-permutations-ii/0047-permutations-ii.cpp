class Solution {
public:
    vector<vector<int>> ans;
    
    void generate(vector<int>& nums, int index) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int>seen;
        for(int i=index;i<nums.size();i++){
            if(seen.find(nums[i])==seen.end()){
                seen.insert(nums[i]);
                swap(nums[i],nums[index]);
                generate(nums,index+1);
                swap(nums[index],nums[i]);
            }
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        generate(nums, 0);
        return ans;
    }
};