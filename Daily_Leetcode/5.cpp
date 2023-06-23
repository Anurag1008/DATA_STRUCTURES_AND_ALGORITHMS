//2328. Number of Increasing Paths in a Grid

//using dfs 
//here we have to calculate number of strictly increasing path ina matrix.
/*
class Solution {
public:
    int mod = 1e9 + 7;
    int xdir[4] = {-1, 1, 0, 0};
    int ydir[4] = {0, 0, -1, 1};
    
    int dfs(int x, int y, vector<vector<int>>& grid,vector<vector<int>>&dp) {
        long long count = 1;

        if(dp[x][y]!=-1) return dp[x][y];

        int n = grid.size();
        int m = grid[0].size();
        
        for (int i = 0; i < 4; i++) {
            int newx = x + xdir[i];
            int newy = y + ydir[i];
            
            if (newx >= 0 && newx < n && newy >= 0 && newy < m && grid[x][y] < grid[newx][newy])
                count += dfs(newx, newy, grid,dp);
        }
        return dp[x][y] = count % mod;
    }
    
    int countPaths(vector<vector<int>>& grid) {
        long long count = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i= 0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                count += dfs(i, j, grid,dp);
            }
        }
        return count % mod;
    }
};
*/