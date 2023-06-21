// 329. Longest Increasing Path in a Matrix

// In this problem i had calculated increasing path from each matrix element using dfs
//Time And Space Complexity of solution is O(n*m) And O(n*m) -> due to memo vector created.


/*
class Solution {
public:
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};

    int dfs(int x, int y, vector<vector<int>>& matrix, vector<vector<int>>& memo) {
        if (memo[x][y] != 0)
            return memo[x][y];
        
        int n = matrix.size();
        int m = matrix[0].size();
        int idxVal = matrix[x][y];
        int maxLength = 1;
        
        for (int idx = 0; idx < 4; idx++) {
            int posx = x + dx[idx];
            int posy = y + dy[idx];
            
            if (posx >= 0 && posx < n && posy >= 0 && posy < m && idxVal < matrix[posx][posy]) {
                int length = 1 + dfs(posx, posy, matrix, memo);
                maxLength = max(maxLength, length);
            }
        }
        
        memo[x][y] = maxLength;
        return maxLength;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> memo(n, vector<int>(m, 0));
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int length = dfs(i, j, matrix, memo);
                ans = max(ans, length);
            }
        }

        return ans;
    }
};

*/