//Number of Triangles in a Directed and Undirected Graph

/*
class Solution
{
    public:
        int numberOfTriangles(vector<vector<int>> &g,int n)
        {
            int c = 0;
            if(n<3) return 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    for(int k=0;k<n;k++){
                        if(i!=j && j!=k && k!=i &&g[i][j] &&g[j][k] && g[k][i]) c++;
                    }
                }
            }
            return c/3;
        }
};
*/

