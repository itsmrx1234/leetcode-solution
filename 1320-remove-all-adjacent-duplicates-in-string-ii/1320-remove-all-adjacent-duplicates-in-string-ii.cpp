class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<int>count(s.size());
        int j=0;
        for(int i=0;i<s.size();++i,++j){
            s[j]=s[i];
            count[j]=j>0&&s[j-1]==s[j]?count[j-1]+1:1;
            if(count[j]==k)
             j-=k;
        }
        return s.substr(0,j);
        
    }
};