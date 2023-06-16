//longest path in directed Acyclic graph
/*
class Solution
{
    public:
    
      void dfs(int node,vector<vector<pair<int,int>>>&adj,vector<bool>&visited,vector<int>&dist){
          visited[node] = true;
          for(auto neighbor : adj[node]){
                int adjacent = neighbor.first; 
                int wt = neighbor.second;
                if(dist[node] + wt > dist[adjacent]){
                    dist[adjacent] = dist[node] + wt;
                    if(!visited[adjacent]){
                        dfs(adjacent,adj,visited,dist);
                    }
                }
          }
          visited[node] = false;
      }
    
      vector <int> maximumDistance(vector<vector<int>> edges,int v,int e,int src)
      {
            vector<int>dist(v,INT_MIN);
            vector<bool>visited(v,false);
            vector<vector<pair<int,int>>>adj(v);
            //create a adjlist
            for(auto edge : edges){
                adj[edge[0]].push_back({edge[1],edge[2]});
            }
            dist[src]=0;
            dfs(src,adj,visited,dist);
            
            return dist;
      }
};
*/