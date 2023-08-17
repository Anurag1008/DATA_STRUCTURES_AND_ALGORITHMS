//https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1

//Count Palindromic Subsequences

/*
class Solution{
    public:
    int m=1e9+7;
    long long int solve(int i,int j,string &a,vector<vector<long long int>>&dp){
        if(i>j) return dp[i][j] =  0;
        if(i == j) return dp[i][j] =  1;
        if(dp[i][j] != -1) return dp[i][j]%m;
        if(a[i] == a[j]) return dp[i][j] = 1+(solve(i+1,j,a,dp)%m + solve(i,j-1,a,dp)%m)%m ;
        else return dp[i][j] =  (solve(i+1,j,a,dp) + solve(i,j-1,a,dp) - solve(i+1,j-1,a,dp) + m)%m;
    }
    long long int  countPS(string str)
    {
        int n = str.length();
        vector<vector<long long int>>dp(n+1,vector<long long int>(n+1,-1));
        return solve(0,n-1,str,dp);
    }
     
};

*/