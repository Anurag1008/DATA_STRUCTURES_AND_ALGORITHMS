//bellman ford algorithm for detecting negative cycle graph

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    
    bool cycle(vector<vector<pair<int, int>>>& adj, int src, vector<bool>& visited, vector<int>& distance) {
    visited[src] = true;
    for (auto neighbor : adj[src]) {
        int v = neighbor.first;
        int weight = neighbor.second;
        if (distance[src] + weight < distance[v]) {
            if (visited[v])
                return true;
            distance[v] = distance[src] + weight;
            if (cycle(adj, v, visited, distance))
                return true;
        }
    }
    visited[src] = false;
    return false;
}

int isNegativeWeightCycle(int n, vector<vector<int>>& edges) {
    vector<vector<pair<int, int>>> adj(n);
    for (auto edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int weight = edge[2];
        adj[u].push_back({ v, weight });
    }

    for (int i = 0; i < n; i++) {
        vector<bool> visited(n, false);
        vector<int> distance(n, INT_MAX);
        distance[i] = 0;
        if (cycle(adj, i, visited, distance))
            return 1;
    }

    return 0;
}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends