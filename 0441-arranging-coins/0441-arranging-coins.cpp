class Solution {
public:
    int arrangeCoins(int n) {
         return (int)((sqrt(8.0 * (long long)n + 1) - 1) / 2);
    }
};