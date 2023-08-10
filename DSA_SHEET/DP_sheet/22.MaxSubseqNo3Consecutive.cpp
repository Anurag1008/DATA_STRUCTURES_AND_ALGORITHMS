/*

https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents-2/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

****Max Sum without Adjacents 2****

class Solution{
  public:
  //kind of 0/1 Knapsack problem with some additional cases.
  //Recurrsion
  int recc(int i,int count,vector<int>&nums){
      if(i >= nums.size()) return 0;
      int include = 0;
      if(count < 2) include = nums[i] + recc(i+1,count+1,nums);
      int exclude = recc(i+1,0,nums);
      return max(include,exclude);
  }
  //Memorization
  int memo(int i,int count,vector<int>&nums,vector<vector<int>>&dp){
      if(i >= nums.size()) return 0;
      if(dp[i][count] != -1) return dp[i][count];
      int include = 0;
      if(count < 2) include = nums[i] + memo(i+1,count+1,nums,dp);
      int exclude = memo(i+1,0,nums,dp);
      return dp[i][count] = max(include,exclude);
  }
  
  int tab(vector<int>&nums){
      int n = nums.size();
      vector<int>dp(n,0);
      dp[0] = nums[0];
      dp[1] = nums[0]+nums[1];
      dp[2] = max(nums[0]+nums[1],max(nums[0]+nums[2],nums[2]+nums[1]));
      for(int i = 3;i<n;i++){
          
         int case1=dp[i-1];
         int case2=dp[i-2]+nums[i];
         int case3=dp[i-3]+nums[i]+nums[i-1];
         
         dp[i]=max(max(case1,case2),case3);
      }
      return dp[n-1];
  }
  int findMaxSum(vector<int>& a){
      //int n = a.size();
      //vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
      //return memo(0,0,a,dp);
      return tab(a);
  }
};
*/