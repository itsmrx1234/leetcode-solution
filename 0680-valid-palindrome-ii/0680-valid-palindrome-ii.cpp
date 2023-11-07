class Solution {
public:
    bool ispal(string &nums,int i,int j){
        while(i<j)
            if(nums[i++]!=nums[j--]) return false;
        return true;
    }
    bool validPalindrome(string &nums) {
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]!=nums[j])
                return ispal(nums,i+1,j)||ispal(nums,i,j-1);
            else i++,j--;
        }
        return true;
    }
};