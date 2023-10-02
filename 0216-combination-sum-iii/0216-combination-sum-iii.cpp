class Solution {
public:
    vector<vector<int>>ans;
       void generate(vector<int>&nums,int n,int k,int index,int sum){
            if(!k){
                if(sum==n)
                ans.push_back(nums);
                return;
            }
            for(int i=index;i<10;i++){
                nums.push_back(i);
                generate(nums,n,k-1,i+1,sum+i);
                nums.pop_back();
            }
        }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        generate(nums,n,k,1,0);
        return ans;
    }
};