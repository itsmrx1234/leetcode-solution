class Solution {
public:
    int maxRepeating(string s, string word) {
        int ans=0;
        string temp=word;
        while(s.find(temp)!=string::npos)
        temp+=word,ans++;
        return ans;
    }
};