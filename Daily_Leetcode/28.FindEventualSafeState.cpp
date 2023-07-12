//802. Find Eventual Safe States

/*
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        //lets create a outdegree array first.
        int n = graph.size();
        vector<int>outdegree(n,0);
        for(int i=0;i<graph.size();i++) outdegree[i] = graph[i].size();

        //now change the graph to know with whom outdegree graph with 0 outdegree are connected.
        vector<vector<int>>inDegree(n);

        for(int i=0;i<n;i++)
            for(auto node : graph[i]) 
                    if(node != i) inDegree[node].push_back(i);
        
        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<inDegree[i].size();j++){
                cout<<inDegree[i][j]<<" ";
            }
            cout<<endl;
        }
        
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<n;i++) if(outdegree[i] == 0) q.push(i);
          
        while(!q.empty()){
            int front = q.front();
            ans.push_back(front);
            q.pop();
            for(auto neighbor : inDegree[front]){
                outdegree[neighbor]--;
                if(outdegree[neighbor] == 0) q.push(neighbor);
            }
        }
         
        sort(ans.begin(),ans.end());
        return ans;
    }
};
*/
