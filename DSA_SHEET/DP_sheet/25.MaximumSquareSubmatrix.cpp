
//https://leetcode.com/problems/maximal-square/description/

//221. Maximal Square

/*
//Recurssion
class Solution {
public:
    int Max = 0;
    int recc(int i,int j,vector<vector<char>>& matrix){
        if(i >= matrix.size() || j>= matrix[i].size()) return 0;
        int right = recc(i,j+1,matrix);
        int down  = recc(i+1,j,matrix);
        int diagonal = recc(i+1,j+1,matrix);
        if(matrix[i][j] == '1'){
            Max = max(Max,1 + min(right,min(down,diagonal)));
            return 1 + min(right,min(down,diagonal));
        }
        else return 0;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        recc(0,0,matrix);
        return Max*Max;
    }
};
*/
/*
memorization
class Solution {
public:
    int Max = 0;
    int recc(int i,int j,vector<vector<char>>& matrix,vector<vector<int>>&dp){
        if(i >= matrix.size() || j>= matrix[i].size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int right = recc(i,j+1,matrix,dp);
        int down  = recc(i+1,j,matrix,dp);
        int diagonal = recc(i+1,j+1,matrix,dp);
        if(matrix[i][j] == '1'){
            Max = max(Max,1 + min(right,min(down,diagonal)));
            return dp[i][j] = 1 + min(right,min(down,diagonal));
        }
        else return dp[i][j]=0;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        recc(0,0,matrix,dp);
        return Max*Max;
    }
};
*/

/*
//Tabulation



*/