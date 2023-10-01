class Solution {
public:
    int  dfs(vector<vector<int>>&grid,int i,int j,int emptycount){
          if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == -1) {
            return 0;
        }
         int ch = grid[i][j];
        if (ch == 2) {
            return emptycount == 0 ? 1 : 0;
        }

        grid[i][j] = -1;
        int paths = 0;

        paths += dfs(grid, i + 1, j, emptycount - 1);
        paths += dfs(grid, i - 1, j, emptycount - 1);
        paths += dfs(grid, i, j + 1, emptycount - 1);
        paths += dfs(grid, i, j - 1, emptycount - 1);

        grid[i][j]=ch;
        return paths;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size(),emptycount=0;
        pair<int,int>index;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    index.first=i;
                    index.second=j;
                }
                else if(grid[i][j]==0){
                    emptycount++;
                }
            }
        }
        return dfs(grid,index.first,index.second,emptycount+1);
    }
};