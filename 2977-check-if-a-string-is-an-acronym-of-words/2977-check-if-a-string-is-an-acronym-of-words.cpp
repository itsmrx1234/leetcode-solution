class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
       for(int i=0;i<words.size();i++)
       if(s[i]!=words[i][0])
       return false;
       return words.size()==s.size();
    }
};