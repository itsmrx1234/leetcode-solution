class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size(),minimumSum = INT_MAX;
        vector<int> prefixMin(n, 1e7), postfixMin(n, 1e8);

        prefixMin[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefixMin[i] = min(prefixMin[i - 1], nums[i]);
        }

        postfixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            postfixMin[i] = min(postfixMin[i + 1], nums[i]);
        }

        for (int i = 1; i < n - 1; i++) 
            if (prefixMin[i - 1] < nums[i] && postfixMin[i + 1] < nums[i])
                minimumSum = min(minimumSum, prefixMin[i - 1] + postfixMin[i + 1] + nums[i]);
        
        return minimumSum == INT_MAX ? -1 : minimumSum;
    }
};