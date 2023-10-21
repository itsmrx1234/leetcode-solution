class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10,"");
        string t="";
        for(auto it:s){
            if(it-'0'<10&&it-'0'>0){
                ans[it-'0'-1]=t;
                t="";
            }
            else if(it!=' ')
            t+=it;
            cout<<it-'0'<<endl;
        }
        string res="";
        for(auto it:ans){
            if(it!=""){
            res+=it;
            res+=" ";
            }
        }
        res.pop_back();
        return res;
    }
};