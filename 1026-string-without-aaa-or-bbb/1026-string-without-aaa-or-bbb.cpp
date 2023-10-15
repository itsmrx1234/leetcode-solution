class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans="";
        while(a&&b){
            if(a>b)
            ans+="aab",a-=2,b--;
            else if(b>a)
            ans+="bba",b-=2,a--;
            else
             ans+="ab",a--,b--;
        }
        while(a||b){
            if(a) ans+="a",a--;
            else ans+="b",b--;
        }
        return ans;
    }
};