//TLE
/*
class Solution {
public:

void dfs(int i,vector<vector<int>>&cost,vector<bool>&visited,int curr,int &res){
    int n = cost.size();
    int flag = 1;
    for(int j=1;j < n;j++){
        if(!visited[j]){
            visited[j] = true;
            flag = 0;
            dfs(j,cost,visited,curr+cost[i][j],res);
            visited[j] = false;
        }
    }
    if(flag == 1){
            res = min(res,curr+cost[i][0]);
        }
        return ;
}
int total_cost(vector<vector<int>>cost){
    int n = cost.size();
    vector<bool>visited(n,false);
    int res = INT_MAX;
    dfs(0,cost,visited,0,res);
    return res;
}

};
TLE
int dfs(int node,vector<vector<int>>&cost,vector<bool>&visited){
    int n = cost.size();
    visited[node] = true;
    
    int Min = INT_MAX;
    for(int i=0;i < n;i++){
        if(!visited[i]){
            int newres = cost[node][i] + dfs(i,cost,visited);
            Min = min(Min,newres);
        }
    }
    visited[node] = false;
    if(Min == INT_MAX) return cost[node][0];
    
    return Min;
}
int total_cost(vector<vector<int>>cost){
    int n = cost.size();
    vector<bool>visited(n,false);
    int res = dfs(0,cost,visited);
    return res;
}

};

*/

//using bitmasking solution
/*
class Solution {
public:
vector<vector<int>>dp;
int solve(int i,int n,vector<vector<int>>&cost,int mask){
    if(mask==0)return cost[i][0];// cost fromt the last city visited to the 
    // start city i.e city 0
    
    if(dp[i][mask]!=-1)return dp[i][mask];
    int ans=1e9+7;
    for(int j=0;j<n;j++){
        if(mask&(1<<j)){
            ans=min(ans,cost[i][j]+solve(j,n,cost,mask^(1<<j)));
            //marking the jth city visited while going from city i to city j
        }
    }
    return dp[i][mask]=ans;
}
int total_cost(vector<vector<int>>cost){
    int n=cost.size();
    if(n==1)return 0;
    
    int mask=(1<<n)-1;
    dp=vector<vector<int>>(n+1,vector<int>(mask+1,-1));
    mask^=(1<<0);// marking the city 0 visited by unsetting the 0th bit
    return solve(0,n,cost,mask);
}
};
*/