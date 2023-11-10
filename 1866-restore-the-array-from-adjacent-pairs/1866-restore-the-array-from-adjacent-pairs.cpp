class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> ans;
        unordered_map<int, vector<int>> mp;
        for (auto it : adjacentPairs) {
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        int head = 0;
        for (auto &it : mp) {
            if (it.second.size() < 2) {
                head = it.first;
                break;
            }
        }
        dfs(mp, head, -1, ans);
        return ans;
    }
private:
    void dfs(unordered_map<int, vector<int>>& mp, int cur, int prev, vector<int>& ans) {
        ans.push_back(cur);
        for (auto it : mp[cur]) {
            if (it != prev) {
                dfs(mp, it, cur, ans);
            }
        }
    }
};