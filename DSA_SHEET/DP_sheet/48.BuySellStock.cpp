
//https://practice.geeksforgeeks.org/problems/maximum-profit4657/1

//Maximum profit

//Recurssion + Memorization
/*
class Solution {
  public:
    int trans(int i,int A[],int N,int k, int buy,vector<vector<vector<int>>>&dp ){
        if(i >= N || k<0 ) return 0;
        if(dp[i][k][buy]!=-1) return dp[i][k][buy];
        int bought = 0,sell = 0;
        if(buy){
            sell = max(A[i]+trans(i+1,A,N,k,0,dp),trans(i+1,A,N,k,1,dp));
        }
        else bought = max((-A[i]+trans(i+1,A,N,k-1,1,dp)),trans(i+1,A,N,k,0,dp));
        return dp[i][k][buy] = max({sell,bought});
    }
    int maxProfit(int K, int N, int A[]) {
        vector<vector<vector<int>>>dp(N+1,vector<vector<int>>(K+1,vector<int>(3,-1)));
        return trans(0,A,N,K,0,dp);
    }
};
*/