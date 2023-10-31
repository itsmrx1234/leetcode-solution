class Solution {
public:
    int minimumSize(vector<int>& nums, int k) {
        int low=1,high=*max_element(nums.begin(),nums.end()),mid;
        while(low<high){
            mid=low+(high-low)/2;
            int sum=0;
            for(auto it:nums){
                sum+=it/mid;
                if(it%mid==0) sum--;
            }
            if(sum<=k) high=mid;
            else low=mid+1; 
        }
        return low;  
    }
};