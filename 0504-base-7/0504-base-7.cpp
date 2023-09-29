class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        string s;
        bool isNegative = num < 0;
        num = abs(num);

        while (num > 0) {
            char digit = '0' + (num % 7);
            s.push_back(digit);
            num /= 7;
        }

        if (isNegative) {
            s.push_back('-');
        }

        reverse(s.begin(), s.end());
        return s;
    }
};