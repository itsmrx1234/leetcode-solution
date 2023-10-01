class Solution {
public: 
    int dfs(vector<vector<int>>&grid,int i,int j){
            if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) {
            return 0;
        }
        int ch=grid[i][j];
        if(!ch)
        return 0;
        grid[i][j]=0;
      auto res = max({ dfs(grid, i + 1, j), dfs(grid, i, j + 1), dfs(grid, i - 1, j), dfs(grid, i, j - 1) });
        grid[i][j]=ch;
        return res+ch;


    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxgold=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                maxgold=max(maxgold,dfs(grid,i,j));
            }
        }
        return maxgold; 
    }
};