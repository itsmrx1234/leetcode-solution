class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> findArray(vector<int>& nums){
        for(int i=nums.size()-1;i>0;i--) nums[i]^=nums[i-1];
        return nums;
    }
};