class Solution {
public:
    bool checkRecord(string s) {
        int c1=0,c2=0;
        s.push_back('i');
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='A')
            c1++;
            if(s[i]=='L'&&s[i+1]=='L'){
                if(++c2==2)
                  return false;
            }
            else 
            c2=0;      
        }
    return c1>1?false:true; 
    }
};