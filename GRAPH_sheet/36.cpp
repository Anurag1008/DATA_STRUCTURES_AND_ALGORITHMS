//Path of greater than equal to k length
/*
class Solution {
public:
    bool dfs(int node,vector<vector<pair<int,int>>>&adj,vector<bool>&visited,int k,int cost){
        if(cost>=k) return true;
        for(auto neighbors : adj[node]){
            pair<int,int>neighbor = neighbors ;
            int currnode = neighbor.first;
            int currwt = neighbor.second;
            
            if(!visited[currnode]){
                visited[currnode] = true;
                if(dfs(currnode,adj,visited,k,cost+currwt)) return true;
                visited[currnode] = false; 
            }
        }
    }
    
    bool pathMoreThanK(int V, int E, int k, int *a) 
    { 
       //create a adjlist
       vector<vector<pair<int,int>>>adj(V);
       
       vector<bool>visited(V,false);
       
       int tweight = 0;
       for(int i=0;i<E*3;i+=3){
           int v = a[i];
           int u = a[i+1];
           int wt = a[i+2];
           tweight+=wt;
           adj[v].push_back({u,wt});
           adj[u].push_back({v,wt});
       }
       int cost = 0;
       visited[0] = true;
       
       return dfs(0,adj,visited,k,cost);
    } 
};
*/