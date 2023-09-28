class Solution {
public:
    int pivotInteger(int n) {
        long long sum = n * (n + 1) / 2;
        long long leftSum = 0;

        for (int i = 1; i <= n; i++) {
            if (leftSum == sum - leftSum - i) {
                return i;
            }
            leftSum += i;
        }

        return -1; // No pivot integer found
    }
};