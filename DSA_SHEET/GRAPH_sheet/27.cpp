//Strongly Connected Components (Kosaraju's Algo)

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// class Solution
// {
// public:
//     // Function to find number of strongly connected components in the graph.
//     void dfs(int node, vector<bool> &visited, vector<int> adj[], stack<int> &stk)
//     {
//         visited[node] = true;
//         for (int neighbor : adj[node])
//         {
//             if (!visited[neighbor])
//             {
//                 dfs(neighbor, visited, adj, stk);
//             }
//         }
//         stk.push(node);
//     }

//     void dfsTranspose(int node, vector<bool> &visited, vector<int> transpose[])
//     {
//         visited[node] = true;
//         for (int neighbor : transpose[node])
//         {
//             if (!visited[neighbor])
//             {
//                 dfsTranspose(neighbor, visited, transpose);
//             }
//         }
//     }
//     int kosaraju(int V, vector<vector<int>> &adj)
//     {
//         vector<bool> visited(V, false);
//         stack<int> stk;

//         for (int i = 0; i < V; i++)
//         {
//             if (!visited[i])
//             {
//                 dfs(i, visited, adj, stk);
//             }
//         }

//         // Step 2: Transpose the graph
//         vector<int> transpose[V];
//         for (int i = 0; i < V; i++)
//         {
//             for (int neighbor : adj[i])
//             {
//                 transpose[neighbor].push_back(i);
//             }
//         }

//         // Step 3 and 4: DFS on the transpose graph to find SCCs
//         fill(visited.begin(), visited.end(), false);
//         int components = 0;
//         while (!stk.empty())
//         {
//             int node = stk.top();
//             stk.pop();

//             if (!visited[node])
//             {
//                 dfsTranspose(node, visited, transpose);
//                 components++;
//             }
//         }

//         return components;
//     }
// };