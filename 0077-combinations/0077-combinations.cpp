class Solution {
public:
    vector<vector<int>>ans;
    void generate(vector<int>&nums,int k,int n,int index){
        if(!k){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<=n;i++){
            nums.push_back(i);
            generate(nums,k-1,n,i+1);
            nums.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
       generate(nums,k,n,1);
       return ans;
        
    }
};