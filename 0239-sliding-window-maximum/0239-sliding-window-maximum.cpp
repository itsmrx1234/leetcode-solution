class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) 
            return {};
        if (k == 1) 
            return nums;
        vector<int>ans;
        deque<int>deq;
        for(int i=0;i<n;i++){
            while(deq.size()&&deq.front()<i-k+1) deq.pop_front();
            while(deq.size()&&nums[deq.back()]<nums[i]) deq.pop_back();
            deq.push_back(i);
            if(i>=k-1) ans.push_back(nums[deq.front()]);
        }
        return ans;
    }
};