class Solution {
public:
    string removeStars(string s) {
        int k=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='*'){
                k--;
                k=max(k,0);
            }
            else{
                s[k++]=s[i];
            }
        }
        return s.substr(0,k);
        
    }
};