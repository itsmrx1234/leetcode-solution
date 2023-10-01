class Solution {
public:
    bool buddyStrings(string s, string goals) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        mp[s[i]]=i;
        for(int i=0;i<goals.size();i++)
        {
            if(mp.find(goals[i])==mp.end())
            return false;
            if(mp[goals[i]]!=i)
            {
                swap(s[mp[goals[i]]],s[i]);
                if(s==goals)
                return true;
                swap(s[mp[goals[i]]],s[i]);
            }
        }
        return false;
    }
};