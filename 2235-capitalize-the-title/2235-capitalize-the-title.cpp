class Solution {
public:
    string capitalizeTitle(string s) {
        string temp="",ans="";
        s.push_back(' ');
        for(int i=0;i<s.size();i++){
            temp+=tolower(s[i]);
            if(s[i]==' '){
                if(temp.size()-1>2)
                temp[0]=toupper(temp[0]);
                ans+=temp;
                temp="";
            }
        }
        ans.pop_back();
        return ans;
    }
};