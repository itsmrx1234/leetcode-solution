class Solution {
public:
    int isPrefixOfWord(string s, string target) {
        s.push_back(' ');
        int cnt=target.size(),n=0,ans=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(s.substr(n,cnt)==target)
                return ans;
                cout<<s.substr(n,n+cnt)<<endl;
                n=i+1;
                ans++;
            }
        }
        return -1;
    }
};