//Dijkstra Algorithm

/*
Shortest Path in a Graph: Given a graph with weighted edges, 
you may be asked to find the shortest path between two nodes.
Dijkstra's algorithm can be used to solve this problem efficiently by finding the minimum cost path.
*/


/*
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S in weighted graph.

    int findminNode(vector<int>&dist,vector<bool>&checkNode)
    {
        int Min = INT_MAX; int MinIndex;
        for(int v=0;v<dist.size();v++){
            if(!checkNode[v] && dist[v]<=Min){
                Min = dist[v];
                MinIndex = v; 
            }
        }
        return MinIndex;
    }
    
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<bool>checkNode(V,false);
        vector<int>dist(V,INT_MAX);
        
        dist[S]=0;
        
        for(int i=0;i<V-1;i++){
            int u = findminNode(dist,checkNode);
            checkNode[u] = true;
            for(auto neighbors : adj[u]){
                int w = neighbors[1];
                int node = neighbors[0];
                if(!checkNode[node] && dist[u]!=INT_MAX && dist[u]+w < dist[node])
                    dist[node] = dist[u]+w;
            }
        }
        return dist;
    }
};
*/