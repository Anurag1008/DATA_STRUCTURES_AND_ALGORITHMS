
//1615.Maximal Network Rank

/*
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>indegree(n,0);
        set<pair<int,int>>check;
        for(int i=0;i<roads.size();i++){
            indegree[roads[i][0]]++;
            indegree[roads[i][1]]++;
            check.insert({roads[i][0],roads[i][1]});
            check.insert({roads[i][1],roads[i][0]});
        }
        int maxrank = 0;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int rank = indegree[i] + indegree[j];
                if(check.find({i,j})!=check.end()) rank--;
                maxrank = max(maxrank,rank);
            }
        }
        return maxrank;
    }
};
*/