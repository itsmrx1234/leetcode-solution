class Solution {
public: Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int findRow(vector<vector<int>> &mat,int col,int m, int n){
        int maxi=-1;
        int index=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>maxi){
                maxi=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int midcol=low+(high-low)/2;
            int midrow=findRow(mat,midcol,m,n);
            int left=midcol-1>=low?mat[midrow][midcol-1]:-1;
            int right=midcol<high?mat[midrow][midcol+1]:-1;
            if(mat[midrow][midcol]>left && mat[midrow][midcol]>right)
            return {midrow,midcol};
            else if(mat[midrow][midcol]<left)
            high=midcol-1;
            else
            low=midcol+1;
        }
        return {-1,-1};
    }
};