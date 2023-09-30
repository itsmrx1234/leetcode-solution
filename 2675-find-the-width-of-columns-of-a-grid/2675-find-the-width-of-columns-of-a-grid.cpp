class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),len=0,res=INT_MIN;
        vector<int>ans;
        for(int j=0;j<n;j++)
        {
            res=INT_MIN;
        for(int i=0;i<m;i++)
        {
            if(grid[i][j]!=0)
          len=floor(log10(abs(grid[i][j]))+1);
          if(grid[i][j]<0)
          len++;
          if(grid[i][j]==0)
          len=1;
          res=max(res,len);
        }
        ans.push_back(res);
        }
        return ans;
    }
};