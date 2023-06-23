//M-Coloring Problem
/*
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) { 
        //create a adj List
        vector<vector<int>>adj(n);
        vector<int>colour(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][j]) adj[i].push_back(j);
            }
        }
        
        return helper(0,adj,colour,m);
    }
    
    bool helper(int node,vector<vector<int>>&adj,vector<int>&colour,int m){
        if(node == adj.size()) return true;
        for(int i=1;i<=m;i++){
            if(isvalid(i,node,adj,colour)){
                colour[node]  = i;
                if(helper(node+1,adj,colour,m))return true;
                colour[node] = 0;
            }
        }
        return false; 
    }
    
    bool isvalid(int color,int node,vector<vector<int>>&adj,vector<int>&colour){
        if(colour[node]) return false;
        for(auto clr : adj[node]){
            if(colour[clr] == color) return false;
        }
        return true;
    }
    
};
*/