//Network Delay Time

//using Djakastra's Algorithms
/*
class Solution {
public:
    void dfs(int node, vector<bool>& visited, vector<int>& dist, vector<vector<pair<int, int>>>& adj) {
        visited[node] = true;
        for (auto neighbor : adj[node]) {
            int wt = neighbor.second;
            int v = neighbor.first;

            if (dist[node] + wt < dist[v]) {
                dist[v] = dist[node] + wt;
                if (!visited[v])
                    dfs(v, visited, dist, adj);
            }
        }
        visited[node] = false;
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n + 1);
        vector<bool> visited(n + 1, false);
        vector<int> dist(n + 1, INT_MAX);
        
        for (auto edge : times)
            adj[edge[0]].push_back({ edge[1], edge[2] });

        dist[k] = 0;
        dfs(k, visited, dist, adj);

        int maxDelay = 0;
        for (int i = 1; i <= n; i++) {
            if (dist[i] == INT_MAX)
                return -1;
            maxDelay = max(maxDelay, dist[i]);
        }

        return maxDelay;
    }
};
*/