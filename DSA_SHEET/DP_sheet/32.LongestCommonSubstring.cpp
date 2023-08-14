
//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1

//Longest Common Substring

//Recurrsion + memorization

/*

class Solution{
    public:
    int recc(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
        if(i == s1.length() || j == s2.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i] == s2[j])  return dp[i][j] = 1 + recc(i+1,j+1,s1,s2,dp);
        return 0;
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxi = max(maxi,recc(i,j,S1,S2,dp));
            }
        }
        return maxi;
    }
};

*/