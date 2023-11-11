class Solution {
private:
    bool isValid(string s) {
        int n = s.size();
        if(n > 3) return false;
        if(n == 1) return true;
        else {
            if(s[0] == '0') return false;
            int x = stoi(s);
            if(x > 255) return false;
            return true;
        }
    }
    void backtrack(vector<string>& res, string& curr, string& s, int string_start, int dot_count) {
        if (dot_count == 4 && string_start == s.size()) {
            res.push_back(curr);
            return;
        }

        for (int i = string_start; i < s.size() && i < string_start + 3; i++) {
            string temp = s.substr(string_start, i - string_start + 1);
            if (isValid(temp)) {
                int currSize = curr.size();
                curr += temp;
                if (dot_count < 3) curr += ".";
                backtrack(res, curr, s, i + 1, dot_count + 1);
                curr.resize(currSize);  // Backtrack and remove the appended string
            }
            if (s[string_start] == '0') break;  // Avoid leading zeros
        }
    }

public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        if(s.size() > 12) return res;
        string curr = "";
        backtrack(res, curr, s, 0, 0);
        return res;
    }
};