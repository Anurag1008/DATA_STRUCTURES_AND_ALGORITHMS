// #include <bits/stdc++.h>
// #define M 100
// #define MOD 1000000007

// class Solution{
//     public:
//     int determinantOfMatrix(vector<vector<int>> matrix)
//     {
//         int det = 0;
//         if (matrix.size() == 1)
//             return matrix[0][0];
//         else if (matrix.size() == 2)
//             return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
//         else
//         {
//             for (int p = 0; p < matrix[0].size(); p++)
//             {
//                 vector<vector<int>> temp;
//                 for (int i = 1; i < matrix.size(); i++)
//                 {
//                     vector<int> row;
//                     for (int j = 0; j < matrix[0].size(); j++)
//                     {
//                         if (p != j)
//                             row.push_back(matrix[i][j]);
//                     }
//                     if (row.size() > 0)
//                         temp.push_back(row);
//                 }
//                     det = det + matrix[0][p] * pow(-1, p) * determinantOfMatrix(temp);
//             }
//             return det;
//         }
//     }
//     int countSpanningTrees(vector<vector<int>>&graph, int n, int m){
//         //create a adj matrix
//         vector<vector<int>>adj(n,vector<int>(n,0));
//         for(int i=0;i<m;i++){
//             int u = graph[i][0];
//             int v = graph[i][1];
//             if(u!=v){
//                 adj[u][v] = 1;
//                 adj[v][u] = 1;
//             }
//         }
        
//         for(int i=0;i<n;i++){
//             int count=0;
//             for(int j=0;j<n;j++){
//                 if(adj[i][j]==1 && i!=j){
//                     adj[i][j] = -1;
//                     count++;
//                 }
//             }
//             adj[i][i] = count;
//         }
        
//         // for(int i=0;i<n;i++){
//         //     for(int j=0;j<n;j++)
//         //         cout<<adj[i][j]<<"  ";
//         //     cout<<endl;
//         // }
        
//         vector<vector<int>> submatrix(n - 1, vector<int>(n - 1));

//         for (int i = 1; i < n; i++)
//         {
//             for (int j = 1; j < n; j++)
//             {
//                 submatrix[i - 1][j - 1] = adj[i][j];
//             }
//         }

//         // This will be the answer as (-1)^(1+1) will be equal to 1 only
//         return determinantOfMatrix(submatrix);
//     }
    
// };