class Solution {
public:
    int maxFreq(string s, int k, int low, int up) {
        int start = 0, end = 0, n = s.size(), ans = 0;
        unordered_map<char, int> mp;
        unordered_map<string, int> ms;

        while (end < n) {
            mp[s[end]]++;

            while (mp.size() > k || end - start + 1 > low) {
                mp[s[start]]--;
                if (mp[s[start]] == 0) {
                    mp.erase(s[start]);
                }
                start++;
            }

            if (end - start + 1 == low && end - start + 1 <= up&&mp.size()<=k) {
                string sub = s.substr(start,low);
                ans = max(ans, ++ms[sub]);
            }
            end++;
        }

        return ans;
    }
};