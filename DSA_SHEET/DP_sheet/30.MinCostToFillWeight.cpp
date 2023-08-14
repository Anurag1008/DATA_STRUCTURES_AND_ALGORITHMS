
//https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1

//Minimum cost to fill given weight in a bag


/*
class Solution{
	public:
	int recc(int i,int cost[], int n, int W){
	    if(i == n || W <=0) return W ==0 ? 0 : INT_MAX;
	    if(cost[i] == -1 ) return recc(i+1,cost,n,W);
	    int include = recc(i,cost,n,W-i-1);
	    int exclude = recc(i+1,cost,n,W);
	    if(include != INT_MAX) include+=cost[i];
	    return min(include,exclude);
	}
	int minimumCost(int cost[], int N, int W) 
	{ 
        return recc(0,cost,N,W);
	} 
};

//Memorization

class Solution{
	public:
	int recc(int i,int cost[], int n, int W,vector<vector<int>>&dp){
	    if(i == n || W <=0) return W ==0 ? 0 : INT_MAX;
	    if(cost[i] == -1 ) return dp[i][W]=recc(i+1,cost,n,W,dp);
	    if(dp[i][W]!= NULL) return dp[i][W];
	    int include = recc(i,cost,n,W-i-1,dp);
	    int exclude = recc(i+1,cost,n,W,dp);
	    if(include != INT_MAX) include+=cost[i];
	    return dp[i][W] = min(include,exclude);
	}
	int minimumCost(int cost[], int N, int W) 
	{ 
	    vector<vector<int>>dp(N+1,vector<int>(W+1));
	    int ans = recc(0,cost,N,W,dp);
	    if(ans == INT_MAX) return -1;
        return ans; 
	} 
};
*/