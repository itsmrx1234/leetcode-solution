class Solution {
public:
    bool isequal(unordered_map<char, int>& mp, unordered_map<char, int>& mt) {
        for (auto it : mp)
            if (!mt.count(it.first) || mt[it.first] < it.second)
                return false;
        return true;
    }

    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        unordered_map<char, int> mp, mt;
        for (auto it : t) mp[it]++;
        
        int start = 0, end = 0, n = s.size(), minlen = INT_MAX, ans = -1;

        while (end < n) {
            mt[s[end]]++;

            while (start < end && mp[s[start]] < mt[s[start]]) {
                mt[s[start]]--;
                start++;
            }

            if (isequal(mp, mt)) {
                if (end - start + 1 < minlen) {
                    minlen = end - start + 1;
                    ans = start;
                }
            }

            end++;
        }

        return (ans == -1) ? "" : s.substr(ans, minlen);
    }
};