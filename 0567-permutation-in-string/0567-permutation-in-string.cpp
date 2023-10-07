class Solution {
public:
    bool isequal(unordered_map<char,int>&m1,unordered_map<char,int>&m2){
        for(auto it:m1){
            if (m2.find(it.first) == m2.end() || m2[it.first] < it.second)
            return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m1,m2;
        for(auto it:s1){
            m1[it]++;
        }
        int start=0,end=0,count=0,n=s2.size();
        while(end<n){
            m2[s2[end]]++;
            if(end-start+1==s1.size()){
                if(isequal(m1,m2))
                return true;
            m2[s2[start++]]--;
            }
            end++;
            
        }
        return false;
    }
};