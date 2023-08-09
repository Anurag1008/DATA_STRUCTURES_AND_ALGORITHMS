/*

https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1

//Recurssion and Memorization

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int dfs(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
        if(i == s1.length() || j == s2.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans = 0;
        if(s1[i] == s2[j]) return 1 + dfs(i+1,j+1,s1,s2,dp);
        else ans = max(dfs(i+1,j,s1,s2,dp),dfs(i,j+1,s1,s2,dp));
        dp[i][j] = ans;
        return dp[i][j];
    }
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return dfs(0,0,s1,s2,dp);
    }
};
*/