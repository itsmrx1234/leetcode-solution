class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& st) {
        unordered_map<string,vector<string>>mp;
        for(auto it:st){
            string temp=it;
            sort(it.begin(),it.end());
            mp[it].push_back(temp);
        }
        vector<vector<string>>ans;
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};