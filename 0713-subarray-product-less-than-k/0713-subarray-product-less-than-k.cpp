class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         if (k <= 1) {
        return 0;
    }
        int start=0,end=0,pd=1,n=nums.size(),count=0;
        while(end<n){
            pd*=nums[end];
            while(pd>=k){
                pd/=nums[start];
                start++;
            }
            count+=end-start+1;
            end++;
           
        }
        return count;
    }
};