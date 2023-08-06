/*

https://practice.geeksforgeeks.org/problems/cutted-segments1642/1

Maximise Cut Segment

Reccursion

class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int recc(int n , int x, int y, int z){
        if(n == 0) return 0;
        if(n<0) return INT_MIN;
        int X = 1 + recc(n-x,x,y,z);
        int Y = 1 + recc(n-y,x,y,z);
        int Z = 1 + recc(n-z,x,y,z);
        return max(X,max(Y,Z));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        return recc(n,x,y,z);
    }
};

Memorisation

class Solution
{
    public:
    int recc(int n , int x, int y, int z,vector<int>&dp){
        if(n == 0) return 0;
        if(n<0) return INT_MIN;
        if(dp[n]!= -1) return dp[n];
        int X = 1 + recc(n-x,x,y,z,dp);
        int Y = 1 + recc(n-y,x,y,z,dp);
        int Z = 1 + recc(n-z,x,y,z,dp);
        return dp[n] = max(X,max(Y,Z));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int>dp(n+1,-1);
        int ans = recc(n,x,y,z,dp);
        if(ans < 0) return 0;
        else return ans;
    }
};


*/