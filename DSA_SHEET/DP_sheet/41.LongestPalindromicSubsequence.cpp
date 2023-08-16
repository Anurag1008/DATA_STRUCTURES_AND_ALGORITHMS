
//https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1


//Longest Palindromic Subsequence

/*
//Recurssion + memorization

class Solution{
  public:
    int recc(int i,int j,string &A,string &B,vector<vector<int>>&dp){
        if(i == A.length() || j == B.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int pick = 0;
        if(A[i] == B[j]) pick = 1 + recc(i+1,j+1,A,B,dp);
        int notPick = recc(i+1,j,A,B,dp);
        int notpick = recc(i,j+1,A,B,dp);
        return dp[i][j] = max(pick,max(notPick,notpick));
        
    }
    int longestPalinSubseq(string A) {
        int n = A.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        string B = A;
        reverse(A.begin(),A.end());
        return recc(0,0,A,B,dp);
    }
};
*/