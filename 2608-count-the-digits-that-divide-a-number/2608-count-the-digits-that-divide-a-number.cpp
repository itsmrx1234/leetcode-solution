class Solution {
public:
    int countDigits(int num) {
        int cnt=0,temp=num;
        while(num){
            if(temp%(num%10)==0)
            cnt++;
            num/=10;
        }
        return cnt;
        
    }
};