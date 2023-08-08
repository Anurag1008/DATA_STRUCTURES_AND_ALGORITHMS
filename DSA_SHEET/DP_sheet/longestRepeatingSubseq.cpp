/*

https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1

Longest Repeating Subsequence


class Solution {
	public:
	    int dfs(int i,int j,string &str,string &str2,vector<vector<int>>&dp){
	        if(i < 0 || j < 0) return 0;
	        
	        if(dp[i][j] != -1) return dp[i][j];
	        
	        int ans = 0;
	        
	        if(str[i] == str2[j] && i!=j) return 1 + dfs(i-1,j-1,str,str2,dp);
	        else ans = max(dfs(i-1,j,str,str2,dp),dfs(i,j-1,str,str2,dp));
	        
	        dp[i][j] = ans;
	        return ans;
	    }
		int LongestRepeatingSubsequence(string str){
		    int n = str.size();
		    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
		    string str2(str.begin(),str.end());
		    return dfs(n-1,n-1,str,str2,dp);
		}

};
*/