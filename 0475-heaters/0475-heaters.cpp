class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int n = houses.size(), m = heaters.size();
        int ans = 0;
        for(auto h : houses){
            int id = lower_bound(heaters.begin(), heaters.end(), h) - heaters.begin();
            int right = id>= m ? INT_MAX : heaters[id] - h;
            int left = id-1 < 0 ? INT_MAX : h - heaters[id-1];
            ans = max(ans,min(right,left) );
        }
        return ans;
    }
};