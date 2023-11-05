class Solution {
public:
    int getWinner(vector<int>& nums, int k) {
      int cnt=0,curr=nums[0];
      for(int i=1;i<nums.size();i++){
          if(curr<nums[i]){
              curr=nums[i];
              cnt=0;
          }
          if(++cnt==k) return curr;
      }
      return curr;
        
    }
};