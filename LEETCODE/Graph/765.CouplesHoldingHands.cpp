//Couples Holding Hands

//minimum swap so both couples sit together

/*
class Solution {
public:
    int count(vector<vector<int>>&edges,int s,vector<bool>&vis){
        vis[s] = true;
        int ans = 1;
        for(int i = 0; i < edges.size(); i++){
            if(edges[s][i] == 1 && !vis[i]){
                ans += count(edges, i, vis);
            }
        }
        return ans;
    }
    int minSwapsCouples(vector<int>& row) {
        for(int i=0;i<row.size();i++) row[i]/=2;
        int n = row.size()/2;
        vector<vector<int>>edges(n,vector<int>(n,0));
        vector<bool>vis(n);
        for(int i=0;i<row.size();i+=2){
            int v1 = row[i];
            int v2 = row[i+1];
            if(v1 == v2) continue;
            edges[v1][v2] = 1;
            edges[v2][v1] = 1;
        }
        int ans = 0;
        for(int i=0;i<n;i++)
            if(!vis[i]) ans+=count(edges,i,vis) - 1;
        return ans;
    }
};
*/