
//Find if Path Exists in Graph.

/*
class Solution {
public:
    bool dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,int dest){
        if(node == dest) return true;
        visited[node] = true;
        for(auto neighbors : adj[node]){
            if(!visited[neighbors]){
                if(dfs(neighbors,adj,visited,dest)) return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        vector<bool>visited(n);
        //creating a adj list
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        if(dfs(source,adj,visited,destination)) return true;
        return false;
    }
};
*/