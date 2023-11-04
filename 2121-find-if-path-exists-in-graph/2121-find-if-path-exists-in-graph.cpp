class Solution {
public:
    int s, d; // source & destination
    const static int N = 2e5 + 5;
    bool vis[N]; // boolean array to check nodes are visited or not
    vector<vector<int>> adj; // adjacency list
    bool sol = 0; // solution

    // dfs
    void dfs(int u) {
        // if node is the destination
        if (u == d) {
            sol = 1;
            return;
        }
        // mark it as visited
        vis[u] = 1;
        // Recur for all the vertices adjacent
        for (auto v : adj[u]) {
            if (!vis[v]) {
                dfs(v);
            }
        }
    }

    bool validPath(int nn, vector<vector<int>>& edges, int source, int destination) {
        // resize the adjacency list to the number of nodes
        adj.resize(nn);

        // fill the adjacency list
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        s = source;
        d = destination;
        // call dfs
        dfs(s);
        return sol;
    }
};