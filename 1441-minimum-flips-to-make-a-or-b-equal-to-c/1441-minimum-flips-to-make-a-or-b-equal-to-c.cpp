class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        while (a || b || c) {
            int a_bit = a & 1;
            int b_bit = b & 1;
            int c_bit = c & 1;
            
            if ((a_bit | b_bit) != c_bit) {
                if (c_bit == 0) {
                    if (a_bit == 1) {
                        flips += 1;
                    }
                    if (b_bit == 1) {
                        flips += 1;
                    }
                } else {
                    flips += 1;
                }
            }
            
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        
        return flips;
    }
};