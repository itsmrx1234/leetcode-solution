class Solution {
public: Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int m=mat.size(),n=mat[0].size(),left=0,right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            int max=0;
            for(int i=0;i<m;i++){
                if(mat[i][mid]>mat[max][mid]) max=i;
            }
            if((mid==0 || mat[max][mid]>mat[max][mid-1]) && (mid==n-1 || mat[max][mid]>mat[max][mid+1])) return {max,mid};
            else if(mid>0 && mat[max][mid]<mat[max][mid-1]) right=mid-1;
            else left=mid+1;
        }
        return {-1,-1};
    }
};