#include <algorithm>

class Solution {
public:
    string sortVowels(string s) {
        string ret;
        vector<char> vowels;

        for (char& ch : s) {
            if (isVowel(ch)) {
                vowels.push_back(ch);
            }
        }

        sort(begin(vowels), end(vowels));

        int i = 0;
        for (char& ch : s) {
            ret += isVowel(ch) ? vowels[i++] : ch;
        }

        return ret;
    }

private:
    bool isVowel(char ch) {
        static const int vowelMask = 0x208222; // Binary: 1000001000001000010
        return (vowelMask >> (ch & 0x1f)) & 1;
    }
};