class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n>0 && __builtin_popcount(n)==1)
          if(32-__builtin_clz(n)&1)
            return true;
            return false;
    }
};