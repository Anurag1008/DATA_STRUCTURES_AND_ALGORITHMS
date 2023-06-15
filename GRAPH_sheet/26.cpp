//check given edge is bridge or not in graph
/*
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    void dfs(int node, vector<bool>&visited,vector<int> adjt[]){
        visited[node] = true;
        for(auto neighbors : adjt[node]){
            if(!visited[neighbors]){
                dfs(neighbors,visited,adjt);
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<int>adjt[V];
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                if((i==c and it==d) or (i==d and it==c)){
                    continue;
                }
                else{
                    adjt[i].push_back(it);
                }
            }
        }
        
        vector<bool>visited(V,false);
        dfs(c,visited,adjt);
        if(visited[d] == 0) return 1;
        return 0;
    }
};
*/

//Find Bridges in a graph using Tarjan’s Algorithm. next time while solve.