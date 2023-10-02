class Solution {
public:
    int n;
    vector<bool>row,right,left;
    int solve(int col){
        if(col==n)
        return 1;
        int ans=0;
        for(int i=0;i<n;i++){
            if(row[i]==false&&left[col+i]==false&&right[n-1+col-i]==false){
                row[i]=true;
                left[col+i]=true;
                right[n-1+col-i]=true;
                ans+=solve(col+1);
                row[i]=false;
                left[col+i]=false;
                right[n-1+col-i]=false;
            }
        }
        return ans;
    }
    int totalNQueens(int n) {
        this->n=n;
        row.assign(n, false);
        left.assign(2 * n, false);
        right.assign(2 * n, false);
        return solve(0);
    }
};