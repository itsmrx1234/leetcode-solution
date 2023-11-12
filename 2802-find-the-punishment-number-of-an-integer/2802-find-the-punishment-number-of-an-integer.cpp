class Solution {
public:
    bool isit(int n,string s,int sum){
        if(s==""&&sum==n) return true;
        for(int i=1;i<=s.size();i++){
            int x=stoi(s.substr(0,i));
            if(isit(n,s.substr(i),sum+x)) return true;
        }
        return false;
    }
    int punishmentNumber(int n) {
        int ans=0;
        for( int i = 1; i <=  n ; i++ ){
            string s=to_string(i*i);
            if(isit(i,s,0))ans+=i*i;
        }
        return ans;  
    }
};