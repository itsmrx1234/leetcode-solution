class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0,end=0,n=nums.size();
        double sum=0;
        double ans=INT_MIN;
        while(end<n){
            sum+=nums[end];
            if(end-start+1==k){
                ans=max(sum,ans);
                sum-=nums[start++];
            }
            end++;
        }
        return ans/k;
    }
};