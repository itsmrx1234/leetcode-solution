class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
              if(cnt)
                ans+=s[i];
            cnt++;
            }
            else if(s[i]==')'){
               cnt--;
             if(cnt)
              ans+=s[i];
            }
        }
        return ans;
        
    }
};