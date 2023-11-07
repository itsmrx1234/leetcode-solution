class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    int n  =dist.size();
    if(n==1) return 1;
    for(int i=0;i<n;i++)
        dist[i] = (dist[i])/speed[i] +(dist[i]%speed[i]?1:0);
    sort(dist.begin() , dist.end());
    int ans = 1,mint = 1;
    for(int i=1;i<n;i++){
        dist[i] -= mint;
        if(dist[i])
          ans++,mint++;
        else break;
    }
    return ans;
    }
};