/*
//https://practice.geeksforgeeks.org/problems/ncr1019/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//Recursion

// User function Template for C++

class Solution{
public:
    int rec(int n,int k){
        if(k > n) return 0;
        if(k==0 || (k == n) ) return 1;
        return rec(n-1,k-1) + rec(n-1,k);
    }
    int nCr(int n, int r){
        return rec(n,r);
    }
};

//Memorization

#define mod 1000000007
class Solution {
public:
    int rec(int n, int k, vector<vector<int>>& dp) {
        if (k > n) return 0;
        if (k == 0 || k == n) return 1;
        if (dp[n][k] != -1) return dp[n][k]; // Corrected this line
        dp[n][k] = (rec(n - 1, k - 1, dp) + rec(n - 1, k, dp))%mod;
        return dp[n][k];
    }
    
    int nCr(int n, int r) {
        vector<vector<int>> dp(n + 1, vector<int>(r + 1, -1));
        return rec(n, r, dp);
    }
};

//Tabulation
#define mod 1000000007
class Solution {
public:
    int nCr(int n, int r) {
        if(r > n) return 0;
        int dp[n+1][r+1];
        int i,j;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=min(i,r);j++){
                if(j==i || j == 0) dp[i][j] = 1;
                else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod;
            }
        }
        return dp[n][r];
    }
};

*/