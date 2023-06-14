//minimum height trees
//we remove the vertices which are having height 1 or single edge.
/*
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>degree(n,0);
        vector<vector<int>>adj(n);
        vector<int>res;
        if(n==1){
            res.push_back(0);
            return res;
        }
        queue<int>q;
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            degree[it[0]]++;
            degree[it[1]]++;
        }

        for(int i=0;i<n;i++){
            if(degree[i] == 1)
                q.push(i);
        }

        while(n>2){
            int popele = q.size();
            n-=popele;
            for(int i=0;i<popele;i++){
                int front = q.front();
                q.pop();
                for(auto it : adj[front]){
                    degree[it]--;
                    if(degree[it] == 1) q.push(it);
                }

            }
        }
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            res.push_back(front);
        }
        return res;
    }
};
*/