//221. Maximal Square

#include<iostream>
#include<vector>
#include<stack>
#include <limits.h>
using namespace std;


class Solution {
public:
    vector<int>nextSmaller(vector<int>&v){
        int n = v.size();
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=n-1;i>=0;i--){
            int curr = v[i];
            while(s.top()!=-1 && v[s.top()] >= curr) s.pop();
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int>prevSmaller(vector<int>&v){
        int n = v.size();
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=0;i<n;i++){
            int curr = v[i];
            while(s.top()!=-1 && v[s.top()] >= curr) s.pop();
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int LargestSquareArea(vector<int>&height){
        int n = height.size();

        vector<int>next(n);
        next = nextSmaller(height);

        vector<int>prev(n);
        prev = prevSmaller(height);
        
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            int l = height[i];
            if(next[i] == -1) next[i] = n;
            int b = next[i] - prev[i] - 1;
            int side = min(l,b);
            int area = side*side;
            ans = max(ans,area);
        }
        return ans;
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int n = matrix[0].size();
        vector<int>histogram(n,0);
        int ans  = INT_MIN;
        for(int i=0;i<rows;i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == '1') histogram[j]++;
                else histogram[j] = 0;
            }
            ans = max(ans,LargestSquareArea(histogram));
        }
        return ans;
    }
};

//DP approach

/*
#include <vector>
#include <algorithm>

class Solution {
public:
    int maximalSquare(std::vector<std::vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        std::vector<std::vector<int>> dp(rows + 1, std::vector<int>(cols + 1, 0));
        int max_side = 0;
        
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (matrix[r][c] == '1') {
                    dp[r + 1][c + 1] = std::min({ dp[r][c], dp[r + 1][c], dp[r][c + 1] }) + 1; // Be careful of the indexing since dp grid has additional row and column
                    max_side = std::max(max_side, dp[r + 1][c + 1]);
                }
            }
        }
        
        return max_side * max_side;
    }
};
*/