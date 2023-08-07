/*

https://leetcode.com/problems/search-a-2d-matrix/description/

74. Search a 2D Matrix


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows == 0) return false;
        int cols = matrix[0].size();
        
        int r = 0, c = cols - 1; // Start from the top-right corner
        
        while (r < rows && c >= 0) {
            if (matrix[r][c] == target) {
                return true;
            } else if (matrix[r][c] < target) {
                r++; // Move down in the matrix
            } else {
                c--; // Move left in the matrix
            }
        }
        
        return false;
    }
};


*/