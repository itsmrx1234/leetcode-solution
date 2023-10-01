class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long sum=0;
        int start=0,end=0,n=nums.size(),minlen=INT_MAX;
        while(end<n){
            if(sum<target)
            sum+=nums[end];
            end++;
            while(sum>=target){
                minlen=min(minlen,end-start);
                sum-=nums[start];
                start++;
            }
        }
        return minlen!=INT_MAX?minlen:0;
    }
};