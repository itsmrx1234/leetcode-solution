class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res=0,sum=0;
        for(int i=low;i<=high;++i){
            string s=to_string(i);
            int n=s.size();
            for(int k=0;k<n/2;++k) sum+=s[k]-s[n-k-1];
            if(!sum&&!(n&1)) res++;
            sum=0;
        }
        return res;
        
    }
};