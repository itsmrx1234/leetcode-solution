class Solution {
public:
    vector<vector<int>>adj;
     const static int N = 2e5 + 5;
    bool vis[N]; 
    bool ans=false;
    void dfs(vector<vector<int>>&adj,int start,int end){
        if(start==end){
            ans=true;
            return;
        }
        vis[start]=true;
        for(auto it:adj[start]){
            if(!vis[it])
                dfs(adj,it,end);
        }
    }
    bool validPath(int n, vector<vector<int>>& edge, int source, int destination) {
        adj.resize(n);
        for(int i=0;i<edge.size();i++){
            adj[edge[i][0]].push_back(edge[i][1]);
            adj[edge[i][1]].push_back(edge[i][0]);
        }
        dfs(adj,source,destination);
        return ans;
    }
};
