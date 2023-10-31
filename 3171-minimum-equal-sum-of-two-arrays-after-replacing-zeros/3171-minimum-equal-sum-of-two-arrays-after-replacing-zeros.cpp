class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
                  int n = nums1.size(); // size of nums1
        int m = nums2.size(); // size of nums2
        long long sum1 = 0, sum2 = 0,zero1 = 0,zero2 = 0;

        for (int i = 0; i < n; i++) {
            sum1 += nums1[i];
            if (nums1[i] == 0) {
                sum1++;
                zero1++;
            }
        }

        for (int i = 0; i < m; i++) {
            sum2 += nums2[i];
            if (nums2[i] == 0) {
                sum2++;
                zero2++;
            }
        }

        if (sum1 == sum2) {
            return sum1;
        } else if (sum1 < sum2) {
            if (zero1 > 0) {
                return sum2;
            } else {
                return -1;
            }
        } else {
            if (zero2 > 0) {
                return sum1;
            } else {
                return -1;
            }
        }


    }
};