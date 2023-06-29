#include <iostream>
#include <vector>
#include <stack>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

//85. Maximal Rectangle

class Solution {
public:
    vector<int> nextSmallerEle(vector<int>&v){
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
    
    vector<int> prevSmallerEle(vector<int>&v){
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

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int>next(n);
        next = nextSmallerEle(heights);

        vector<int>prev(n);
        prev = prevSmallerEle(heights);
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            int l = heights[i];
            
            if(next[i] == -1)
                next[i] = n;
            
            int b = next[i] - prev[i] - 1;
            
            int area = l*b;
            ans = max(ans,area);
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int n = matrix[0].size();
        vector<int>histogram(n,0);
        int ans  = INT_MIN;
        for(int i=0;i<rows;i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == '1') histogram[j]++;
                else histogram[j] = 0;
            }
            ans = max(ans,largestRectangleArea(histogram));
        }
        return ans;
    }
};