class Solution {
public:
    vector<int>ans;
    void dfs(int i,int j,vector<vector<int>>&matrix){
        if(ans.size()==matrix.size()*matrix[0].size()|| i<0 || i>=matrix.size()||j<0|| j>=matrix[0].size() || matrix[i][j]==1e8) return ;
        ans.push_back(matrix[i][j]);
        matrix[i][j]=1e8;
        if(i<=j+1)
        dfs(i,j+1,matrix);
        dfs(i+1,j,matrix);
        dfs(i,j-1,matrix);
        dfs(i-1,j,matrix);

    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        dfs(0,0,matrix);
        return ans;
        
    }
};