#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//84. Largest Rectangle in Histogram

//Time complexity : O(n)

class Solution {
public:

    vector<int> nextSmallerEle(vector<int> arr,int n)
    {
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
     vector<int> prevSmallerEle(vector<int> arr,int n)
    {
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=0;i<n;i++)
        {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int>next(n);
        next = nextSmallerEle(heights,n);

        vector<int>prev(n);
        prev = prevSmallerEle(heights,n);
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
};