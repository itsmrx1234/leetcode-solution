class Solution {
public:
    int sumofk(vector<int>nums,int k){
        int start=0,end=0,n=nums.size(),sum=0,ans=0;
        while(end<n){
            sum+=nums[end];
            while(end-start+1>k){
                sum-=nums[start++];
            }
            if(end-start+1==k)
            ans+=sum;
            end++;
        }
        return ans;
    }
    int sumOddLengthSubarrays(vector<int>& arr) {
          int sum=0;
          for(int i=1;i<=arr.size();i+=2){
              sum+=sumofk(arr,i);
          }
        return sum;
    }
};