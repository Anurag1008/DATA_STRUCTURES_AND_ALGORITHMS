#include<iostream>
#include<vector>
using namespace std;


// 63. Unique Paths II

//Recursion

class Solution {
public:
    int uniquePaths(int x,int y,vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        
        if(x < 0 || y < 0 || x >=n || y >= m) return 0;
        if(grid[x][y] == 1) return 0;
        if(x == n-1 && y == m-1 ) return 1;
        
        int path = uniquePaths(x+1,y,grid) + uniquePaths(x,y+1,grid);
        return path;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //obstacle is represented by 1
        return uniquePaths(0,0,obstacleGrid);
    }
};

//memorization

class Solution {
public:
    int uniquePaths(int x,int y,vector<vector<int>>& grid,vector<vector<int>>&dp){
        int n = grid.size();
        int m = grid[0].size();
        if(x < 0 || y < 0 || x >=n || y >= m) return 0;
        if(grid[x][y] == 1) return 0;
        if(x == n-1 && y == m-1 ) return 1;

        if(dp[x][y] != -1) return dp[x][y];
        
        dp[x][y] = uniquePaths(x+1,y,grid,dp) + uniquePaths(x,y+1,grid,dp);
        return dp[x][y];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //obstacle is represented by 1
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return uniquePaths(0,0,obstacleGrid,dp);
    }
};