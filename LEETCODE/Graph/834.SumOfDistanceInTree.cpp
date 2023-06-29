#include <iostream>
#include <vector>
using namespace std;

//834. Sum of Distances in Tree **important

class Solution {
public:
    void dfs(int node,int parent,vector<int>&ans,vector<int>&join,vector<vector<int>>&adj){
        for(auto neighbor : adj[node])
        if(neighbor!=parent){
            dfs(neighbor,node,ans,join,adj);
            join[node]+=join[neighbor];
            ans[node]+=ans[neighbor]+join[neighbor];
        }
    }
    
    void dfs2(int node,int parent,vector<int>&ans,vector<int>&join,vector<vector<int>>&adj){
        for(auto neighbor : adj[node])
        if(neighbor!=parent){
            ans[neighbor]+=ans[node]+join[0]-join[neighbor]-ans[neighbor]-join[neighbor];
            dfs2(neighbor,node,ans,join,adj);
        }
    }
    
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        //create a adj List
        vector<int>ans(n,0),join(n,1);
        vector<vector<int>>adj(n);
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        dfs(0,-1,ans,join,adj);
        dfs2(0,-1,ans,join,adj);
        return ans;
    }
};
