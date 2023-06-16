//Critical connections in graph using Trajan's algorithm

/*
class Solution {
public:
    //we have to find number of disconnected component in graph and then prin the ending and   starting index index of both of them.

    void dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<int>&lowLink,vector<int>&index,int parent,int &currentIndex,vector<vector<int>>&bridges){
        visited[node] = true;
        lowLink[node] = currentIndex;
        index[node] = currentIndex;
        currentIndex++;

        for(auto neighbor : adj[node]){
            if(parent == neighbor) continue;
            if(!visited[neighbor]){
                dfs(neighbor,adj,visited,lowLink,index,node,currentIndex,bridges);
                lowLink[node] = min(lowLink[node],lowLink[neighbor]);

                if(lowLink[neighbor] > index[node]){
                    vector<int>bridge;
                    bridge.push_back(node);
                    bridge.push_back(neighbor);
                    bridges.push_back(bridge);
                }
            }
            else{
                lowLink[node] = min(lowLink[node],index[neighbor]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        //Find Bridges in a graph using Tarjan’s Algorithm.
        vector<vector<int>>adj(n);
        vector<bool>visited(n,false);
        vector<int>lowLink(n,-1);
        vector<int>index(n,-1);
        vector<vector<int>>bridges;
        int currentIndex = 0;
        //creating a adjList
        for(auto edge : connections){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,adj,visited,lowLink,index,-1,currentIndex,bridges);
            }
        }

        return bridges;
    }
};
*/