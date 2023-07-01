//120 Traingle

//Recursion and memorization

/*
class Solution {
public:
    
    int helper(int row,int col,vector<vector<int>>& t,int n,vector<vector<int>>&dp){
        if(row == n-1) return t[row][col];
        if(dp[row][col]!= -1) return dp[row][col];
        int down,downRight;
        down = downRight = INT_MAX;
        down = helper(row+1,col,t,n,dp);
        downRight = helper(row+1,col+1,t,n,dp);
        return dp[row][col] = t[row][col] + min(down,downRight);
    }

    int minimumTotal(vector<vector<int>>& t) {
        int n =  t.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(0,0,t,n,dp);
    }
};
*/