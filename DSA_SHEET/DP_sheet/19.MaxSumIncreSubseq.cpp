/*
https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

Maximum sum increasing subsequence

**Recussion and Memorization

class Solution{
	public:
	int dp[1001][1001];
	int sum(int i,int prev,int arr[],int n){
	    if(i >= n) return 0;
	    int pick = 0;
	    if(prev == -1 || arr[i]>arr[prev]) pick = arr[i] + sum(i+1,i,arr,n);
	    int notpick = sum(i+1,prev,arr,n);
	    return max(pick,notpick);
	}
	int memo(int i,int prev,int arr[],int n){
	    if(i >= n) return 0;
	    if(dp[i][prev+1] != -1) return dp[i][prev+1];
	    int pick = 0;
	    if(prev == -1 || arr[i]>arr[prev]) pick = arr[i] + memo(i+1,i,arr,n);
	    int notpick = memo(i+1,prev,arr,n);
	    return dp[i][prev+1] = max(pick,notpick);
	}
	int maxSumIS(int arr[], int n)  
	{  
	    memset(dp,-1,sizeof(dp));
	    return memo(0,-1,arr,n);
	}  
};


*/