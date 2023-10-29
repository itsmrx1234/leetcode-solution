class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto &it:grid) count+=upper_bound(it.rbegin(),it.rend(),-1)-it.rbegin();
        return count;
    }
};