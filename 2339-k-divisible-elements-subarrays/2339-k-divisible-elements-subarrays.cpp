class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int start = 0, end = 0, cnt = 0, n = nums.size();
        unordered_map<string, int> mp;
        string currentStr = "";

        while (end < n) {
            if (nums[end] % p == 0) {
                cnt++;
            }
            
            while (cnt > k) {
                if (nums[start] % p == 0) {
                    cnt--;
                }
                start++;
            }
            currentStr = "";
            for (int i = end; i >= start; i--) {
                currentStr=to_string(nums[i])+ ","+currentStr;
            mp[currentStr]++;
            }

            end++;
        }
        
        return mp.size();
    }
};