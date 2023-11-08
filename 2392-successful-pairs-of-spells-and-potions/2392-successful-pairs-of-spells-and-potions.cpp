class Solution {
public:
    vector<int> successfulPairs(vector<int>& S, vector<int>& P, long long k) {
        int n = size(P);
        sort(begin(P),end(P));
        vector<int> ans;
        for(long long&&s: S){
            long long req = k%s ? k/s+1 : k/s;
            int idx = lower_bound(begin(P),end(P),req) - begin(P);
            if(idx < n) ans.push_back(n-idx);
            else ans.push_back(0);
        }
        return ans;
    }
};