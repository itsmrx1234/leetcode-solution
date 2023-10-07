class Solution {
public:
    bool isequal(unordered_map<char,int>&mp,unordered_map<char,int>&mt){
                for(auto it:mp){
                    if(mt.find(it.first)==mt.end()||mt[it.first]<it.second)
                      return false;
                }
                return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        unordered_map<char,int>mp,mt;
        for(auto it:p){
            mp[it]++;
        }
        int start=0,end=0,n=s.size();
        while(end<n){
            mt[s[end]]++;
            if(end-start+1==p.size()){
                if(isequal(mp,mt))
                   v.push_back(start);
                mt[s[start++]]--;
            }
            end++;

        }
        return v;
        
    }
};