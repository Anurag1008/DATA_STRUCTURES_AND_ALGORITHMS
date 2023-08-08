/*
https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

Longest Increasing Subsequence

**Recurrsion

**memorization

class Solution
{
public:
    //Function to find length of longest increasing subsequence.
    int dfs(int i, int prev, int n, int a[],vector<vector<int>>&dp) {
        if (i == n) return 0;
        if(dp[i][prev+1] != -1) return dp[i][prev+1];
        int take = 0;
        if (prev == -1 || a[i] > a[prev]) take = 1 + dfs(i + 1, i, n, a, dp);

        int notTake = dfs(i + 1, prev, n, a, dp);

        // Revert prevele back to prev after the recursive calls.
        return dp[i][prev+1] = max(take, notTake);
    }

    int longestSubsequence(int n, int a[]) {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return dfs(0, -1 , n, a, dp);
    }
};

**Tabulation

class Solution
{
public:
    //Function to find length of longest increasing subsequence.
    int tabulation(int n, int a[]) {

        vector<vector<int>>dp(n+1,vector<int>(n+1,0));

        for(int i = n-1;i>=0;i--){
            for(int j = i-1;j>=-1;j--){
                int take = 0;
                if (j == -1 || a[i] > a[j]) take = 1 + dp[i+1][i+1];

                int notTake = dp[i+1][j+1];

                dp[i][j+1] = max(take, notTake);
            }
        }
        return  dp[0][0];
    }

    int longestSubsequence(int n, int a[]) {

        return tabulation(n,a);
    }
};

**Space Optimization
class Solution
{
public:
    //Function to find length of longest increasing subsequence.
    int tabulation(int n, int a[]) {

        vector<int> curr(n+1,0);
        vector<int> next(n+1,0);

        for(int i = n-1;i>=0;i--){
            for(int j = i-1;j>=-1;j--){
                int take = 0;
                if (j == -1 || a[i] > a[j]) take = 1 + next[i+1];

                int notTake = next[j+1];

                curr[j+1] = max(take, notTake);
            }
            next = curr;
        }
        return  next[0];
    }

    int longestSubsequence(int n, int a[]) {

        return tabulation(n,a);
    }
};

** using Tabulation with Binary search

class Solution
{
public:
    //Function to find length of longest increasing subsequence.

int ceil(int tail[],int a,int l,int r){
        while(r>l){
            int m=(l+r)/2;
            if(tail[m]>=a)
              r=m;
              else
              l=m+1;
        }
        return r;
    }
    int longestSubsequence(int n, int a[])
    {
       int tail[n]; //
       tail[0]=a[0];
       int len=1;
       for(int i=1;i<n;i++){
           if(a[i]>tail[len-1]){
               len++;
               tail[len-1]=a[i];
           }
           else{
               int index=ceil(tail,a[i],0,len-1);
               tail[index]=a[i];
           }
       }
       return len;
    }
};

*/