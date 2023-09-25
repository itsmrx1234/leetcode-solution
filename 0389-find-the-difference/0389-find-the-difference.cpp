class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans= t[t.size() - 1];
        for(int i = 0; i < t.size()-1; i++)
            ans ^= s[i] ^ t[i];
        return ans;
    }
};