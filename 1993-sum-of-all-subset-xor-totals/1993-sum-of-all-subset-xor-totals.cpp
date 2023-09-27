class Solution {
public:
    int ans = 0;

    void generate(vector<int>& nums, int index, int sum) {
        if (index == nums.size()) {
            ans += sum;
            return;
        }
        generate(nums, index + 1, sum ^ nums[index]);
        generate(nums, index + 1, sum);
    }

    int subsetXORSum(vector<int>& nums) {
        generate(nums, 0, 0);
        return ans;
    }
};