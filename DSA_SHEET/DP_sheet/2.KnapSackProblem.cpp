//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/*
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int idx,int W,int wt[],int val[],int n){
        if(idx < 0 || W == 0) return 0;
        if(wt[idx] > W) return solve(idx-1,W,wt,val,n);
        int ans = 0;
        int taken = val[idx] + solve(idx-1,W-wt[idx],wt,val,n);
        int notTaken =solve(idx-1,W,wt,val,n);
        return max(taken,notTaken);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       return solve(n-1,W,wt,val,n);
    }
};
*/