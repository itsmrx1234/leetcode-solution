class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int numTrees(int n) {
        long long result = 1;
        
        for (int i = 0; i < n; ++i) {
            result = result * 2 * (2 * i + 1) / (i + 2);
        }
        
        return static_cast<int>(result);
    }
};