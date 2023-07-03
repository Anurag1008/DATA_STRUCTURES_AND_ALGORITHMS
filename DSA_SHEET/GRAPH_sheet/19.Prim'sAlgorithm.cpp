
//Prim's Algorithm

//Time complexity : O(V^2) ,after using binary heap(priority_queue) O(E*log(V))
//space complexity : O(V)

/*
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	int minEdge(vector<int>&key,vector<bool>&visited){
	    int M = INT_MAX;
	    int minIndex;
	    for(int v=0;v<key.size();v++){
	        if(!visited[v] && key[v]<M){
	            M = key[v];
	            minIndex = v;
	        }
	    }
	    return minIndex;
	}
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<bool>visited(V,false);
        vector<int>key(V,INT_MAX);
        
        key[0] = 0;
        for(int i =0 ;i<V-1;i++){
            int u = minEdge(key,visited);
            visited[u] = true;
            for(auto neighbors : adj[u]){
                int w = neighbors[1];
                int v = neighbors[0];
                if(!visited[v] && w<key[v]) key[v] = w;
            }
        }
        int ans = 0;
        for(auto it : key) ans+=it;
          
        return ans;
    }
};
*/

// In  java code in C++ later

/*
class GFG {
 
// Function of spanning tree
static int spanningTree(int V, int E, int edges[][])
    {
         ArrayList<ArrayList<Pair>> adj=new ArrayList<>();
         for(int i=0;i<V;i++)
         {
             adj.add(new ArrayList<Pair>());
         }
         for(int i=0;i<edges.length;i++)
         {
             int u=edges[i][0];
             int v=edges[i][1];
             int wt=edges[i][2];
             adj.get(u).add(new Pair(v,wt));
             adj.get(v).add(new Pair(u,wt));
         }
         PriorityQueue<Pair> pq = new PriorityQueue<Pair>();
         pq.add(new Pair(0,0));
         int[] vis=new int[V];
         int s=0;
         while(!pq.isEmpty())
         {
             Pair node=pq.poll();
             int v=node.v;
             int wt=node.wt;
             if(vis[v]==1)
             continue;
              
             s+=wt;
             vis[v]=1;
             for(Pair it:adj.get(v))
             {
                 if(vis[it.v]==0)
                 {
                     pq.add(new Pair(it.v,it.wt));
                 }
             }
         }
         return s;
    }
*/