//Graph is Barpatite or not ? 
/*
class Solution {
public:
    bool bipartite(vector<vector<int>>& graph, vector<int>& visited, vector<int>& colour, int v) {
        visited[v] = 1;

        for (int i = 0; i < graph[v].size(); i++) {
            int neighbor = graph[v][i];

            if (visited[neighbor] == -1) {
                colour[neighbor] = 1 - colour[v];
                if (!bipartite(graph, visited, colour, neighbor))
                    return false;
            } else if (colour[neighbor] == colour[v]) {
                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visited(n, -1);
        vector<int> colour(n, -1);

        for (int i = 0; i < n; i++) {
            if (visited[i] == -1) {
                colour[i] = 0;
                if (!bipartite(graph, visited, colour, i))
                    return false;
            }
        }

        return true;
    }
};
*/