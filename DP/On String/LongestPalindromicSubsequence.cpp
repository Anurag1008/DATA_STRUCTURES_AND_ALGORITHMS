
//516. Longest Palindromic Subsequence

//Time Complexity : O (N^2)
//Space Complexity : O (N^2)

/*
class Solution {
public:
    int lcs(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
        if(i == s1.length()) return 0;
        if(j == s2.length()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        if(s1[i] == s2[j]) ans = 1 + lcs(i+1,j+1,s1,s2,dp);
        else ans = max(lcs(i+1,j,s1,s2,dp),lcs(i,j+1,s1,s2,dp));
        return dp[i][j] = ans;
    }
    int longestPalindromeSubseq(string s) {
        vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
        string s2 = s;
        reverse(s.begin(),s.end());
        return lcs(0,0,s,s2,dp);
    }
};
*/