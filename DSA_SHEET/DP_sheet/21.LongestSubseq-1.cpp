/*

https://practice.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1

Longest subsequence-1

class Solution{
public:
    int dp[1001][1001];
    int recc(int i,int prev,int N,int A[]){
        if(i == N) return 0;
        int take = 0;
        if(prev == -1 || abs(A[i]-A[prev]) == 1) take =  1 + recc(i+1,i,N,A);
        int notTake = recc(i+1,prev,N,A);
        return max(take,notTake);
    }
    int memo(int i,int prev,int N,int A[]){
        if(i == N) return 0;
        if(dp[i][prev+1] != -1) return dp[i][prev+1];
        int take = 0;
        if(prev == -1 || abs(A[i]-A[prev]) == 1) take =  1 + memo(i+1,i,N,A);
        int notTake = memo(i+1,prev,N,A);
        return dp[i][prev+1] = max(take,notTake);
    }
    int longestSubsequence(int N, int A[])
    {
        memset(dp,-1,sizeof(dp));
        return memo(0,-1,N,A);
    }
};

*/