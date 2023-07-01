//931. Minimum Falling Path Sum

// Recursion -> TLE

/*
class Solution {
public:
    void minfalling(int r,int c,int sum,vector<vector<int>>& matrix,int &ans){
        int n = matrix.size();
        int m = matrix[0].size();
        if(r < 0 || c<0 || c>=m) return;
        if(r == matrix.size()){
            ans = min(ans,sum);
            return;
        }
        sum+=matrix[r][c];
        minfalling(r+1,c-1,sum,matrix,ans);
        minfalling(r+1,c,sum,matrix,ans);
        minfalling(r+1,c+1,sum,matrix,ans);
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        for(int j=0;j<matrix[0].size();j++)
            minfalling(0,j,0,matrix,ans);
        return ans;
    }
};
*/

//Memorization with bottom up recursion -> failed last test case TLE

/*
class Solution {
public:
    int solve(int row, int col, vector<vector<int>> &matrix,vector<vector<int>> &dp)
    {
        if(col<0 || col>matrix[0].size()-1) return 1E9;
        if(row==0) return matrix[row][col];
        if(dp[row][col] != -1) return dp[row][col];
        int up = matrix[row][col] + solve(row-1,col,matrix,dp);
        int leftDiagonal = matrix[row][col] + solve(row-1,col-1,matrix,dp);
        int rightDiagonal = matrix[row][col] + solve(row-1,col+1,matrix,dp);
        return dp[row][col] = min(up,min(leftDiagonal,rightDiagonal));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<m;i++)
        {
            ans = min(ans,solve(n-1,i,matrix,dp));
        }
        return ans;
    }
};
*/

//Tabulation Bottom up approach

/*
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minSum = INT_MAX;

        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));

        for(int j = 0; j<m; j++)
            dp[n-1][j] = matrix[n-1][j];

        for(int i = n-2; i>=0; i--){
            for(int j = 0; j<m; j++){

                for(int y = -1; y<=1; y++){
                    if(j+y >= 0 && j+y < m)
                        dp[i][j] = min(dp[i][j], dp[i+1][j+y]);
                }

                dp[i][j] += matrix[i][j];
            }
        }

        for(int j = 0; j<m; j++)
            minSum = min(minSum, dp[0][j]);

        return minSum;
    }
};
*/
