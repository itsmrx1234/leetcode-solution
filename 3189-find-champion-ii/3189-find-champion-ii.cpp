class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        for(int i = 0; i<edges.size(); i++){
            if(!vis[edges[i][1]]){
                vis[edges[i][1]] = 1;
            }
        }
        int stronger;
        int count = 0;
        for(int i = 0; i<vis.size(); i++){
            if(vis[i] == 0){
                count++;
                stronger = i;
                if(count>1){
                    return -1;
                }
            }
            
        }
        return stronger;
    }
};