class Solution {
public:
    void dfs(int curr,vector<vector<int>>&room,vector<bool>&visited){
        visited[curr]=true;
        for(auto it:room[curr])
            if(!visited[it])
                dfs(it,room,visited);
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>vis(rooms.size(),false);
        dfs(0,rooms,vis);
        for(auto it:vis)
            if(!it) return false;
        return true;
    }
};