class Solution {
    int sumOfTermsTillNDivisibleByX(int n,int x)
    {
        int numberOfTerms=n/x;
        return (numberOfTerms*(2*x+(numberOfTerms-1)*x))/2;
    }
public:
    int sumOfMultiples(int n) {
        int ans=sumOfTermsTillNDivisibleByX(n,3)+sumOfTermsTillNDivisibleByX(n,5)+sumOfTermsTillNDivisibleByX(n,7)
                -sumOfTermsTillNDivisibleByX(n,21)-sumOfTermsTillNDivisibleByX(n,15)-sumOfTermsTillNDivisibleByX(n,35)
                +sumOfTermsTillNDivisibleByX(n,105);
        return ans;
    }
};