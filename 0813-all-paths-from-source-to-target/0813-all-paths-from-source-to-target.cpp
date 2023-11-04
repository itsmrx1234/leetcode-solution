class Solution {
public:
    vector<vector<int>>ans;
    vector<int>paths;
    void helper(vector<vector<int>>& graph,int curr){
        paths.push_back(curr);
        if(curr==graph.size()-1)  ans.push_back(paths);
        else for(auto it:graph[curr]) helper(graph,it);
        paths.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        helper(graph,0);
        return ans;
    }
};