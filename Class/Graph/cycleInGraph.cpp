#include <bits/stdc++.h>
using namespace std;//{ Driver Code Starts


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int node, vector<int> adj[],vector<bool>& visited,int parent) {
    visited[node] = true;
    for (int adjacent : adj[node]) {
        if (!visited[adjacent]) {
            if(dfs(adjacent, adj,visited,node)) return true;
        }
        else if(adjacent!=parent){
            return true;
        }
    }
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if(dfs(i, adj,visited,-1))
                return true;
        }
    }
    return false;
}

};

/*
for(int i= 0;i<V;i++){
            cout<<i<<" : ";
            for(int j=0;j<adj[i].size();j++){
                cout<<adj[i][j];
            }
            cout<<endl;
        }
*/

/*
6 5
5 3
3 1
1 2
2 4
4 0
*/

int main() {

    int t;
    cout<<"enter value of t : "<<endl;
    cin >> t;
 
    while (t--) {
        int V, E;
        cout<<"value of V and E"<<endl;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
        if(obj.isCyclic(V, adj)) cout<<"true"<<endl;
        else cout<<"false";
    }
    
        

    
    return 0;
}

