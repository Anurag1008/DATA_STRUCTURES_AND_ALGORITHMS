
/*
Topological sort is a common algorithm used in graph theory
to determine a linear ordering of the vertices of a directed acyclic graph (DAG)
such that for every directed edge (u, v), vertex u comes before vertex v in the ordering.
In other words, it arranges the vertices in such a way that all dependencies are satisfied.
*/

// Time AND Space complexities are O(V+E)

/*
class Solution
{
public:
    // Function to return list containing vertices in Topological order.
    void dfs(int node, vector<bool> &visited, vector<int> &ans, vector<int> adj[])
    {
        visited[node] = true;
        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                dfs(neighbor, visited, ans, adj);
            }
        }
        ans.push_back(node);
    }

    vector<int> topoSort(int V, vector<int> adj[])
    {
        vector<bool> visited(V, false);
        vector<int> ans;

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                dfs(i, visited, ans, adj);
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
*/