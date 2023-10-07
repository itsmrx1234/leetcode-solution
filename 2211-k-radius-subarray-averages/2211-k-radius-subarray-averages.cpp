class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
     int start=0,end=0,n=nums.size();
     long long sum=0;
     vector<int>ans(n,-1);
     while(end<n){
         sum+=nums[end];
        if(end-start+1==(2*k+1)){
            ans[end-k]=sum/(2*k+1);
            sum-=nums[start++];
        }
        end++;
     }
     return ans;
    }
};