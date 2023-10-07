class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
       int start=0,end=0,count=0,n=nums.size();
       long long sum=0;
       while(end<n){
           sum+=nums[end];
           if(end-start+1==k){
               if(sum/k>=threshold)
                count++;
               sum-=nums[start++];
           }
           end++;
       }
       return count;
    }
};