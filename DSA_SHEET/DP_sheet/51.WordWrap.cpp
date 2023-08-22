//https://practice.geeksforgeeks.org/problems/word-wrap1646/1

//Word Wrap

/*
class Solution {
public:
    int f(int i,int j,int k,vector<int>&nums,vector<vector<int>>&dp){
        int n = nums.size();
        if(i > j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans = INT_MAX;
        int sum  = 0;
        for(int idx = i;idx <= j;idx++){
            sum += nums[idx];
            //for last line space
            if(sum <= k && idx == n-1) return 0;
            if(sum <= k) ans = min(ans,(k-sum)*(k-sum) + f(idx+1,j,k,nums,dp)),sum ++; // to handle space
        }
        return dp[i][j] = ans;
    }
    int solveWordWrap(vector<int>nums, int k) 
    { 
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return f(0,nums.size()-1,k,nums,dp);
    } 
};
*/
