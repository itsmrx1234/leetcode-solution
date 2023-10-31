class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size(),ans=0;
         for (int i = 0; i < n; i++) {
            unordered_set<int> mp;
            for (int j = i; j < n; j++) {
                mp.insert(nums[j]);
                ans  += mp.size() * mp.size();
            }
        }
        return ans;
        
    }
};