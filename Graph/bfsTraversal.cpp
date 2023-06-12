/*
#include<vector>
#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
class solution{
    public:
    void bfs(vector<int> &adj,unordered_map<int,bool>&visited,vector<int>&ans,int node,int size){
        queue<int>q;
        q.push(node);
        visited[node]=1;
        while(!q.empty())
        {
            int frontNode=q.front();
            q.pop();
            
            ans.push_back(frontNode);
            
            //traverse its neighbour of node
            for(vector<int>& adjecent : adj)
            {
                if (!visited[adjecent])
                {
                    visited[adjecent] = 1;
                    queue.push(adjecent);
                }
            }
        }
    }
    vector<int> graphNodes(int V,vector<int> arr[]){
        vector<int>ans;
        unordered_map<int,bool>visited;

        for(int i=0;i<V;i++){
            if(!visited[i]){
                bfs(arr,visited,ans,i,V);
            }
        }
        return ans;
    }

};
*/