//207. Course Schedule

/*
class Solution {
public:
    bool dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&cycledet){
        visited[node] = true;
        cycledet[node] = true;
        for(auto neighbors : adj[node]){
            if(!visited[neighbors]){
                if(dfs(neighbors,adj,visited,cycledet)) return true;
            }
            else if(cycledet[neighbors]) return true;
        }
        cycledet[node] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& edges) {
        //we have to just detect cycle because if cycle appears it not a valid case
        int n  = numCourses;//number of vertex
        vector<bool>cycledet(n,false);//check self loop && cycle
        vector<bool>visited(n,false);
        vector<vector<int>>adj(n);
        //creating adj list
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }

        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,cycledet)) return false;
            }
        }
        return true;
    }
};
*/