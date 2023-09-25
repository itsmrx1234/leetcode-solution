class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";
        unordered_map<char, int> mp;
        int n = s.size();
        for (auto it : s) {
            mp[it]++;
            if (mp[it] > (n + 1) / 2) {
                return "";
            }
        }
        priority_queue<pair<int, char>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        while (!pq.empty()) {
            pair<int, char> p1 = pq.top();
            pq.pop();
            ans += p1.second;

            if (!pq.empty()) {
                pair<int, char> p2 = pq.top();
                pq.pop();
                ans += p2.second;

                if (p1.first > 1) {
                    pq.push({p1.first - 1, p1.second});
                }
                if (p2.first > 1) {
                    pq.push({p2.first - 1, p2.second});
                }
            }
        }
        return ans;
    }
};