class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int low=1,high=1e9,mid,flow,boq;
        if ((long)m * k > nums.size()) return -1;
        while(low<high){
             mid=low+(high-low)/2;
             boq=0,flow=0;
             for(auto it:nums){
                 if(mid<it){
                     flow=0;
                 }
                 else if(++flow>=k){
                     boq++;
                     flow=0;
                 }
             }
             if(boq<m) low=mid+1;
             else high=mid;
        }
        return low;
    }
};