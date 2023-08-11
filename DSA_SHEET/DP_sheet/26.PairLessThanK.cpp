
//https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1

//Pairs with certain difference

//recurssion
/*
class Solution{
    public:
    int recc(int i,int prev,int arr[],int N,int K){
        if(i >= N) return 0;
        int take = INT_MIN;
        if((arr[i]-arr[prev] )< K) take = arr[i] + arr[prev] + recc(i+2,i+1,arr,N,K);
        int notTake = recc(i+1,prev+1,arr,N,K);
        return max(take,notTake);
    }
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        sort(arr,arr+N);
        return recc(1,0,arr,N,K);
    }
};
*/

//Memorization
/*
class Solution{
    public:
    int recc(int i,int prev,int arr[],int N,int K,vector<vector<int>>&dp){
        if(i >= N) return 0;
        if(dp[i][prev]!= -1) return dp[i][prev];
        int take = INT_MIN;
        if((arr[i]-arr[prev] )< K) take = arr[i] + arr[prev] + recc(i+2,i+1,arr,N,K,dp);
        int notTake = recc(i+1,prev+1,arr,N,K,dp);
        return dp[i][prev]=max(take,notTake);
    }
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
        sort(arr,arr+N);
        return recc(1,0,arr,N,K,dp);
    }
};

*/

//Tabulation 
/*

*/

