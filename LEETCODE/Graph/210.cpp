//course schedule II
/*
class Solution {
public:
    bool dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<int>&selfv,vector<int>&ans){
        visited[node] = true;
        selfv[node] = true;
        for(auto neighbors : adj[node]){
            if(selfv[neighbors]) return false;
            if(!visited[neighbors] && !dfs(neighbors,adj,visited,selfv,ans)){
                return false;
            }
        }
        selfv[node] = false;
        ans.push_back(node);
        return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& vec) {
        //first we create a adjList
        vector<vector<int>>adj(numCourses);
        vector<bool>visited(numCourses,false);
        vector<int>selfv(numCourses,false);
        vector<int>ans;
        for(int i=0;i<vec.size();i++){
            int u = vec[i][0];
            int v = vec[i][1];
            adj[u].push_back(v);
        }
        for(int i=numCourses-1;i>=0;i--){
            if(!visited[i] && !dfs(i,adj,visited,selfv,ans))
                return {};
        }
        
        return ans;
        
    }
};
*/