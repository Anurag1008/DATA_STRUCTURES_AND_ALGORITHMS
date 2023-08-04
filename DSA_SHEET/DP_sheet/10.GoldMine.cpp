/*

https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

Gold Mine Problem

//Recurssion
class Solution{
public:
    int dfs(int r,int c,vector<vector<int>>&grid){
        if(r >= grid.size() || c >= grid[0].size() || r < 0 || c < 0 ) return 0;
        int du = grid[r][c]+dfs(r-1,c+1,grid);
        int ri  = grid[r][c]+dfs(r,c+1,grid);
        int dd = grid[r][c]+dfs(r+1,c+1,grid);
        return max(du,max(ri,dd));
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int ans = 0;
        for(int i=0;i<n;i++){
            int val = dfs(i,0,M);
            ans = max(val,ans);
        }
        return ans;
    }
};

//Memorization
class Solution{
public:
    int dp[51][51];
    int dfs(int r,int c,vector<vector<int>>&grid){
        if(r >= grid.size() || c >= grid[0].size() || r < 0 || c < 0 ) return 0;
        if(dp[r][c] != -1 ) return dp[r][c];
        int du = grid[r][c]+dfs(r-1,c+1,grid);
        int ri  = grid[r][c]+dfs(r,c+1,grid);
        int dd = grid[r][c]+dfs(r+1,c+1,grid);
        return dp[r][c]=max(du,max(ri,dd));
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int ans = 0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            int val = dfs(i,0,M);
            ans = max(val,ans);
        }
        return ans;
    }
};

*/