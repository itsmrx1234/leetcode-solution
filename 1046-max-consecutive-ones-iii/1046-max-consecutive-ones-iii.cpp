class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,end=0,n=nums.size(),maxlen=INT_MIN,sum=0;
        while(end<n){
            sum+=nums[end];
            while(sum<end-start+1-k){
                sum-=nums[start++];
            }
            maxlen=max(end-start+1,maxlen);
            end++;
        }
        return maxlen;
        
    }
};