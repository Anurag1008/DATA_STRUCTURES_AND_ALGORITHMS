//All path from source to target in (DAG)
/*

class Solution {
public:
    void dfs(int node,vector<vector<int>>& graph,vector<int>&path,vector<vector<int>>&ans){
        path.push_back(node);
        for(auto neighbor : graph[node]){
            if(neighbor != graph.size()-1 ){
                dfs(neighbor,graph,path,ans);
            }
            else{
                path.push_back(neighbor);
                ans.push_back(path);
                path.pop_back();
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<vector<int>>ans;
        vector<int>path;
        dfs(0,graph,path,ans);
        return ans;
    }
};

*/