class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
       return max(left.empty() ? 0 : *max_element(left.begin(), left.end()), right.empty() ? 0 : n - *min_element(right.begin(), right.end()));
    }
};