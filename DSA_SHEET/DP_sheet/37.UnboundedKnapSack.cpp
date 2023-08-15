
//https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1

//Unbounded KnapSack

/*

class Solution{
public:
    int recc(int i,int N,int W,int val[],int wt[],vector<vector<int>>&dp){
        if( i==N ) return 0;
        if(W==0) return 0;
        if(dp[i][W]!=-1) return dp[i][W];
        int take = 0;
        if(wt[i] <= W) take = val[i] + recc(i,N,W-wt[i],val,wt,dp);
        int nottake = recc(i+1,N,W,val,wt,dp);
        return dp[i][W] = max(take,nottake);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N+1,vector<int>(W+1,-1));
        return recc(0,N,W,val,wt,dp);
    }
};

*/