class Solution {
#define ll long long
public:
    ll rev(ll n){
        ll rev=0;
        while(n){
            rev=rev*10+n%10;
            n/=10;
        }
        return rev;
    }
    ll reverse(int x) {
        if(abs(rev(x))>INT_MAX)
        return 0;
        return rev(x);
    }
};