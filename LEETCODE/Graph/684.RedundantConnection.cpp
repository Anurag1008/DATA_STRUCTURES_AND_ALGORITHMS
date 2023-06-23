//684. Redundant Connection

/*
class Solution {
private: 
    vector<int>seen; 
public:
    bool cycleDetected(vector<vector<int>>&adjlist,int curr,int src){
        seen[curr] = 1;
        bool res{false};
        for(auto &neighbor : adjlist[curr]){
            if(!seen[neighbor]) res = cycleDetected(adjlist,neighbor,src);
            else if(src == curr) return true;
        }
        return res;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        if(edges.empty()) return {};

        vector<int>res;
        vector<vector<int>>adjlist(edges.size()+1);
        seen.resize(edges.size()+1,0);
        for(auto &edge : edges){
            adjlist[edge[0]].push_back(edge[1]);
            adjlist[edge[1]].push_back(edge[0]);
            if(cycleDetected(adjlist,edge[0],edge[0])) return edge;
            fill(seen.begin(),seen.end(),0);
        }
        return {};
    }
};
*/
