class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
        int temp=0;
        while(k--){
            temp=pq.top(),pq.pop();
            pq.push(++temp);
        }
        long long pd=1,mod(1e9+7);
        while(pq.size()){
            pd=pd*pq.top()%mod,pq.pop();
        }
        return pd;
    }
};