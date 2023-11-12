#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfitAssignment(std::vector<int>& difficulty, std::vector<int>& profit, std::vector<int>& worker) {
        int n = difficulty.size(), ans = 0;
        std::vector<std::pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            v.emplace_back(difficulty[i], profit[i]);  // Use emplace_back to insert elements
        }

        std::sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
            v[i].second = std::max(v[i].second, v[i - 1].second);

        for (int i = 0; i < worker.size(); i++) {
            std::pair<int, int> p = {worker[i], 1e9};
            int idx = std::upper_bound(v.begin(), v.end(), p) - v.begin();
            if (--idx < 0) continue;
            ans += v[idx].second;
        }

        return ans;
    }
};