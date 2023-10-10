class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0,j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                cnt++;
            }
            else{
                cnt=0;
            }
            if(cnt<2){
                nums[j++]=nums[i];
            }

        }
        return j;
    }
};