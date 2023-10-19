class Solution {
public:
    string removeDuplicates(string s) {
        int j=0;
      for(int i=0;i<s.size();++i,++j){
          s[j]=s[i];
          if(j>0&&s[j]==s[j-1])
            j-=2;
      }
      return s.substr(0,j);
    }
};