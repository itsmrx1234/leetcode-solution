class Solution {
public:
    
    vector<int> sortArrayByParity(vector<int>& nums) {
       auto cmp=[](auto e){ return e%2==0;} ;
       partition(nums.begin(),nums.end(),cmp);
        return nums;
    }
};