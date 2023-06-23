//Minimum time taken by each job to be completed given by a Directed Acyclic Graph

//using the concept of topological sorting 
//creating indegree vector : to check each job.

//Time AND Space Complexity : O(n+m) n : number of nodes, m : number of edges

/*
class Solution{
    public:
        //using topological sort
        vector<int> minimumTime(int n,vector<vector<int>> &edges,int m)
        {
            // code here 
            vector<int> adj[n+1];
            
            for(int i=0; i<m; ++i) {
                adj[edges[i][0]].push_back(edges[i][1]);
            }
            
            vector<int> indegree(n+1,0);
            for(int i=1; i<=n; ++i) {
                for(auto it:adj[i]) {
                    indegree[it]++;
                }
            }
            
            queue<pair<int,int>> q;
            vector<int> dist(n,0);
            
            for(int i=1; i<=n; ++i) {
                if(indegree[i]==0) {
                    q.push({i,1});
                }
            }
            while(!q.empty()) {
                auto it=q.front();
                q.pop();
                
                int f=it.first, s=it.second;
                
                dist[f-1]=s;
                
                for(auto it: adj[f]) {
                    indegree[it]--;
                    if(indegree[it]==0) {
                        q.push({it,s+1});
                    }
                }
            }
            return dist;
        }



};
*/