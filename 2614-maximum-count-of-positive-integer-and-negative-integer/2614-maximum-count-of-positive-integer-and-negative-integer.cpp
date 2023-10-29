class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n1=upper_bound(nums.begin(),nums.end(),-1)-nums.begin();
        int n2=nums.size()-(upper_bound(nums.begin(),nums.end(),0)-nums.begin());
        cout<<n1<<" "<<n2;
        return max(n1,n2);
        
    }
};